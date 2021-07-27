#include<iostream>
#define max 100
using namespace std;

void nhap_message(char message[], int &key)
{
	cin.getline(message, max);
	cin >> key;
}

void ceasar_decrypt(char message[], int key)
{
	int i;
	char ch;
	for(i = 0; message[i] != '\0'; ++i){
	ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;	
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	cout << "Decrypted message: " << message;
}

int main()
{
	char message[max]; int key;
	nhap_message(message,key);
	ceasar_decrypt(message,key);
	return 0;
}
