#include <iostream>
#include "aes_ctr.h"

int main()
{
	string plainText = "This Program shows how to use ECB, CBC, CBC_CTS, CFB, OFB and CTR mode of AES in Crypto++.";  
    string aesKey = "0123456789ABCDEF0123456789ABCDEF";//256bits, also can be 128 bits or 192bits  
    string aesIV = "ABCDEF0123456789";//128 bits  
    string  CTR_EncryptedText,CTR_DecryptedText;   


	 CTR_EncryptedText = CTR_AESEncryptStr(aesKey, aesIV, plainText.c_str());//CTR加密  
        CTR_DecryptedText = CTR_AESDecryptStr(aesKey, aesIV, CTR_EncryptedText.c_str());//CTR解密 

	cout << "CTR测试"<< endl;  
    cout << "原文：" << plainText << endl;  
    cout << "密文：" << CTR_EncryptedText << endl;  
    cout << "恢复明文：" << CTR_DecryptedText << endl << endl;  


	return 0;
}
