
%module libpcpython
%{
#include "PcAPIL.h"
%}
int PcAPI_initialize(char* info_file_path,char* credentials_pw);
int PcAPI_getSession(const char* client_ip);
int PcAPI_logCurrRequest(int api_sid, int sql_type, char* api_program, char* api_userid);
char* PcAPI_encrypt_with_id_l(int api_sid, long long enc_col_id, char* src, int src_len, int sql_type);
char* PcAPI_encrypt_with_name_l(int api_sid, const char* enc_col_name, char* src, int src_len, int sql_type);
char* PcAPI_decrypt_with_id_l(int api_sid, long long enc_col_id, char* src, int src_len, int sql_type);
char* PcAPI_decrypt_with_name_l(int api_sid, const char* enc_col_name, char* src, int src_len, int sql_type);