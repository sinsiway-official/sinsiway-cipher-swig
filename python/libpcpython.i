%module libpcpython
%{
#include "PcAPIL.h"
%}
int PcAPI_initialize(char* info_file_path,char* credentials_pw);
int PcAPI_getSession(const char* client_ip);
char* PcAPI_enc_id(int api_sid, long long enc_col_id, char* src, int src_len);
char* PcAPI_dec_id(int api_sid, long long enc_col_id, char* src, int src_len);
char* PcAPI_enc_nm(int api_sid, const char* enc_col_name, char* src, int src_len);
char* PcAPI_dec_nm(int api_sid, const char* enc_col_name, char* src, int src_len);