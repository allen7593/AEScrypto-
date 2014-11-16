#include <iostream>
#include "crypt.h"

int main()
{
	CryptoAES aes;
	unsigned char usrInput[AES::BLOCKSIZE];
	unsigned char cipherText[AES::BLOCKSIZE];
	unsigned char plainText[AES::BLOCKSIZE];

	cout<<"Input something: ";
	cin>>usrInput;

	cout<<"User input: "<<usrInput<<endl;

	cout<<"\n*********"<<endl;
	aes.encrypt(usrInput,cipherText);
	
	cout<<"Cipher Text is: ";
	for(int i=0;i<AES::BLOCKSIZE;i++)
		cout<<(int)cipherText[i]<<" ";
	cout<<"\n*********"<<endl;
	
	aes.decrypt(plainText,cipherText);
	cout<<"Plain Text is: "<<plainText<<endl;


	return 0;
}
