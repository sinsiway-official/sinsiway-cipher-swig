import libpcpython

# initialize config
rtn = libpcpython.PcAPI_initialize('/var/tmp/.petra/petra_cipher_api.conf', '')
if rtn < 0:
    print("initialize error: [", rtn, "]\n")
    quit()

# get session id
sid = libpcpython.PcAPI_getSession('')
if sid < 0:
    print("getSession Error [", sid, "]\n")
    quit()
else:
    print("\nsid : [" , sid , ']\n')

try:
    # plain text define 
    plainText = 'Python Encrypt Id Log API test'
    print("1. WITH ID : plain text [" ,plainText, "] length [", len(plainText), "]\n")

    # encrypt data
    encryptText = libpcpython.PcAPI_encrypt_with_id_l(sid, 1001, plainText, len(plainText), 4)
    print("use enc_id => encrypt text [",encryptText,"] length [", len(encryptText), "]")

    # decrypt data
    decryptText = libpcpython.PcAPI_decrypt_with_id_l(sid, 1001, encryptText, len(encryptText), 4)
    print("use enc_id => decrypt text [",decryptText,"] length [", len(decryptText), "]\n")

    plainText = 'Python Encrypt Name Log API test'
    plainTextLength = len(plainText)
    print("2. WITH COLUMN : plain text [" ,plainText, "] length [", plainTextLength, "]\n")

    # encrypt data
    encryptText = libpcpython.PcAPI_encrypt_with_name_l(sid, 'ARIA_256_B64', plainText, plainTextLength, 4)
    print("use column name => encrypt text [",encryptText,"] length [", len(encryptText), "]")

    # decrypt data
    decryptText = libpcpython.PcAPI_decrypt_with_name_l(sid, 'ARIA_256_B64', encryptText, len(encryptText), 4)
    print("use column name => decrypt text [",decryptText,"] length [", len(decryptText), "]\n")

except Exception as e:
    print("Petra Exception [ " + e.args[0] + " ]")

rtn = libpcpython.PcAPI_logCurrRequest(sid, 0, 'sinsiway petra python', 'user')
if rtn < 0:
    print("logCurrRequest error : ", rtn)