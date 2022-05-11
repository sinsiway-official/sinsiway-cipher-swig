/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.1.0
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

static PHP_FUNCTION(PcAPI_initialize);
static PHP_FUNCTION(PcAPI_getSession);
static PHP_FUNCTION(PcAPI_encrypt);
static PHP_FUNCTION(PcAPI_decrypt);
static PHP_FUNCTION(PcAPI_encrypt_name);
static PHP_FUNCTION(PcAPI_decrypt_name);
static PHP_FUNCTION(PcAPI_enc_id);
static PHP_FUNCTION(PcAPI_dec_id);
static PHP_FUNCTION(PcAPI_enc_nm);
static PHP_FUNCTION(PcAPI_dec_nm);
static PHP_FUNCTION(PcAPI_cryptFile);
static PHP_FUNCTION(PcAPI_isEncrypted);
PHP_MINIT_FUNCTION(libpcphp);

#endif /* PHP_LIBPCPHP_H */
