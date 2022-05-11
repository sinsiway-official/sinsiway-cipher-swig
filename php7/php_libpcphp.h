/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_LIBPCPHP_H
#define PHP_LIBPCPHP_H

extern zend_module_entry libpcphp_module_entry;
#define phpext_libpcphp_ptr &libpcphp_module_entry

#ifdef PHP_WIN32
# define PHP_LIBPCPHP_API __declspec(dllexport)
#else
# define PHP_LIBPCPHP_API
#endif

ZEND_NAMED_FUNCTION(_wrap_PcAPI_initialize);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_getSession);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_encrypt);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_decrypt);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_encrypt_name);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_decrypt_name);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_enc_id);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_dec_id);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_enc_nm);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_dec_nm);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_cryptFile);
ZEND_NAMED_FUNCTION(_wrap_PcAPI_isEncrypted);
PHP_MINIT_FUNCTION(libpcphp);

#endif /* PHP_LIBPCPHP_H */