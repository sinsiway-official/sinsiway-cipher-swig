/* 2022.07.01 added by dhkim. for python, php, etc... */

#ifdef WIN32
char* __declspec(dllexport) PcAPI_encrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
        int             sql_type);
#else
char* PcAPI_encrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
        int             sql_type);
#endif

#ifdef WIN32
char* __declspec(dllexport) PcAPI_encrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*  src,
	int             src_len,
        int             sql_type);
#else
char* PcAPI_encrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*  src,
	int             src_len,
        int             sql_type);
#endif

#ifdef WIN32
char* __declspec(dllexport) PcAPI_decrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
        int             sql_type);
#else
char* PcAPI_decrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
        int             sql_type);
#endif

#ifdef WIN32
char* __declspec(dllexport) PcAPI_decrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*  src,
	int             src_len,
        int             sql_type);
#else
char* PcAPI_decrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*  src,
	int             src_len,
        int             sql_type);
#endif


#ifdef WIN32
int __declspec(dllexport) PcAPI_getSession2(
        const char*     client_ip,
        const char*     client_program,
        const char*     os_user);
#else
int PcAPI_getSession2(
        const char*     client_ip,
        const char*     client_program,
        const char*     os_user);
#endif