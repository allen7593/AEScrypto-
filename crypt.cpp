#include "crypt.h"

CryptoAES::CryptoAES()
{
	memset(xorBlock,0,AES::BLOCKSIZE);
	unsigned char key[AES::BLOCKSIZE]="C55D86FA5AD1";
	memcpy(aesKey,key,AES::BLOCKSIZE);//123 bits key
	aesEncryptor.SetKey( aesKey, AES::DEFAULT_KEYLENGTH );
	aesDecryptor.SetKey( aesKey, AES::DEFAULT_KEYLENGTH );
}

CryptoAES::~CryptoAES(){}

void CryptoAES::encrypt(unsigned char plainText[AES::BLOCKSIZE],unsigned char cipherText[AES::BLOCKSIZE])
{
	aesEncryptor.ProcessAndXorBlock( plainText, xorBlock, cipherText );
}

void CryptoAES::decrypt(unsigned char plainText[AES::BLOCKSIZE],unsigned char cipherText[AES::BLOCKSIZE])
{
	aesDecryptor.ProcessAndXorBlock( cipherText, xorBlock, plainText );
}
