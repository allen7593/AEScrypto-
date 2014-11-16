#include <crypto++/aes.h>
#include <cstring>

using namespace std;
using namespace CryptoPP;

class CryptoAES
{
	public:
		CryptoAES();
		~CryptoAES();
	
		void encrypt(unsigned char [],unsigned char []);
		void decrypt(unsigned char [],unsigned char []);
		

	private:
		AESEncryption aesEncryptor;
		AESDecryption aesDecryptor;	
		
		unsigned char aesKey[AES::DEFAULT_KEYLENGTH];
		unsigned char xorBlock[AES::BLOCKSIZE];
};
