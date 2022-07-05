# 주의 사항
## 인터페이스 파일에 #include "PcAPIL.h" 구문 포함 건. 
swig 를 통한 python 라이브러리 빌드 시 반드시 인터페이스 파일(libpcpython.i) '#include "PcAPIL.h"' 구문이 포함되어야 한다. 
해당 구문이 포함되지 char* 형태의 스트링 리턴 함수 구현 시 에러가 발생한다. 

## 리턴 데이터를 함수 인자로 전달하는 함수 사용 불가. 
함수 인자로 리턴받을 버퍼를 넣어주는 형태의 함수 사용 불가. 
기존 c 라이브러리가 사용하는 복호화 값을 전달받기 dst 버퍼를 인자로 전달하는 형태의 함수 사용 시 파이선 호출 시점에 dst 버퍼에 복호화 데이터를 넣으려는 시점에 에러 발생. 
포인터 형 데이터를 지원하지 않아 변수의 메모리를 참조에 데이터가 입력되는 것이 허용 되지 않는 것으로 보임. 

## 인터페이스 파일에 unsigned 사용 불가. 
데이터 타입을 명시적으로 선언하지 않는 언어 특성 상 unsigned 형태의 함수는 사용이 불가능 한 것으로 보임. 
컴파일 시점에 에러가 발생 함. 

# 이력
## 암/복호화 데이터를 리턴하는 char* 리턴 함수 추가. 
char* PcAPI_encrypt_with_id_l(int api_sid, long long enc_col_id, char* src, int src_len, int sql_type);
char* PcAPI_encrypt_with_name_l(int api_sid, const char* enc_col_name, char* src, int src_len, int sql_type);
char* PcAPI_decrypt_with_id_l(int api_sid, long long enc_col_id, char* src, int src_len, int sql_type);
char* PcAPI_decrypt_with_name_l(int api_sid, const char* enc_col_name, char* src, int src_len, int sql_type);

해당 함수들을 PcAPIL.h, PcAPIL.cpp 에 추가해주어야 한다. 
swig를 통한 python 라이브러리 생성 시 c에서 발생한 에러(except)를 python으로 전달할 방법이 없기 때문에 발생하는 에러 코드를 char* 형태로 전달할 수 밖에 없다. 
이 때 리턴되는 에러 코드가 복호화 시 에러에 의한 코드인지 평문 데이터였는지 확인 할 방법이 없기 때문에 함수 내에서 에러 발생 시 내부 에러 스트링을 리턴 해 해당 스트링을 libpcpython.py 에서 한번 더 확인 후 강제 except 처리해 주는 로직이 들어간다. 

