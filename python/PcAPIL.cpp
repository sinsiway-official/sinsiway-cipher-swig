/* 2022.07.01 added by dhkim. for python, php, etc... */

char* PcAPI_encrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
	int             sql_type)
{
        PcaApiSession*  session=PcaApiSessionPool::getApiSession(api_sid);
        if (!session) return (char*)"PcAPI_ERR_INVALID_SID";

        unsigned char* dst=0;
        unsigned int dst_len=0;
        int rtn=0;
		if ((rtn=session->encrypt(enc_col_id, src, src_len, &dst, &dst_len, sql_type)) < 0) {
			return (char*)"PcAPI_ERR_ENCRYPT_FAILED";
        }
        dst[dst_len]='\0';
		return (char*)dst;
}

char* PcAPI_encrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*	src,
	int             src_len,
	int             sql_type)
{
        PcaApiSession*  session=PcaApiSessionPool::getApiSession(api_sid);
        if (!session) return (char*)"PcAPI_ERR_INVALID_SID";

        unsigned char* dst=0;
        unsigned int dst_len=0;
        int rtn=0;
		if ((rtn=session->encrypt(enc_col_name, src, src_len, &dst, &dst_len, sql_type)) < 0) {
			return (char*)"PcAPI_ERR_ENCRYPT_FAILED";
        }
        dst[dst_len]='\0';
		return (char*)dst;
}

char* PcAPI_decrypt_with_id_l(
	int             api_sid,
	long long       enc_col_id,
	unsigned char*	src,
	int             src_len,
	int             sql_type)
{
        PcaApiSession*  session=PcaApiSessionPool::getApiSession(api_sid);
        if (!session) return (char*)"PcAPI_ERR_INVALID_SID";

        unsigned char* dst=0;
        unsigned int dst_len=0;
        int rtn=0;
		if ((rtn=session->decrypt(enc_col_id, src, src_len, &dst, &dst_len, sql_type)) < 0) {        
            return (char*)"PcAPI_ERR_DECRYPT_FAILED";
        }
        dst[dst_len]='\0';
		return (char*)dst;
}

char* PcAPI_decrypt_with_name_l(
	int             api_sid,
	const char*     enc_col_name,
	unsigned char*	src,
	int             src_len,
	int             sql_type)
{
        PcaApiSession*  session=PcaApiSessionPool::getApiSession(api_sid);
        if (!session) return (char*)"PcAPI_ERR_INVALID_SID";

        unsigned char* dst=0;
        unsigned int dst_len=0;
        int rtn=0;
		if ((rtn=session->decrypt(enc_col_name, src, src_len, &dst, &dst_len, sql_type)) < 0) {
            return (char*)"PcAPI_ERR_DECRYPT_FAILED";
        }
        dst[dst_len]='\0';
		return (char*)dst;
}