#include<iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string crypt ("XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr");

    string message, key;
    size_t position(0);

    cout << "Entrer le message secret: ";
    getline(cin,message);

    for (int i = 0; i < message.length(); ++i){
        if (isalpha(message[i])){
            position = alphabet.find(message[i]);
            key = key + crypt[position];
        }else{
            key = key + message[i];
        }     
    }

    cout << "Criptage du message... " << endl;
    cout << "Key: " << key << endl;

    message.clear();
    
    for (int i = 0; i < key.length(); ++i){
        if (isalpha(key[i])){
            position = crypt.find(key[i]);
            message = message + alphabet[position];
        }else{
            message = message + key[i];
        }     
    }

    cout << "Decriptage du message... " <<  endl;
    cout << "Message: " << message << endl;
    
    return 0;
}