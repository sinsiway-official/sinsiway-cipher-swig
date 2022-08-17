%module libpcphp
%{
#include "PcAPIL.h"
%}
int PcAPI_initialize(char* info_file_path,char* credentials_pw);
int PcAPI_getSession(const char* client_ip);
int PcAPI_encrypt(int api_sid, long long enc_col_id, unsigned char* src, int src_len, unsigned char* dst, unsigned int* dst_len);
int PcAPI_decrypt(int api_sid, long long enc_col_id, unsigned char* src, int src_len, unsigned char* dst, unsigned int* dst_len);
int PcAPI_encrypt_name(int		api_sid, const char*	enc_col_name, unsigned char*	src, int		src_len, unsigned char*	dst, unsigned int*	dst_len);
int PcAPI_decrypt_name(int		api_sid, const char*	enc_col_name, unsigned char*	src, int		src_len, unsigned char*	dst, unsigned int*	dst_len);
char* PcAPI_enc_id(int api_sid, long long enc_col_id, char* src, int src_len);
char* PcAPI_dec_id(int api_sid, long long enc_col_id, char* src, int src_len);
char* PcAPI_enc_nm(int api_sid, const char* enc_col_name, char* src, int src_len);
char* PcAPI_dec_nm(int api_sid, const char* enc_col_name, char* src, int src_len);
int PcAPI_cryptFile(int api_sid,const char* parameters,const char* in_file_path,const char* out_file_path);
int PcAPI_isEncrypted(const char* file_name);
