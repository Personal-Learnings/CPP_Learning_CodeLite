#include <iostream>
#include <string>

using namespace std;

int main() {

    const string mapping = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string secret  = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    string message, encryptedMessage, decryptedMessage = {};    
    
    cout << "Enter your secret message: ";
    getline(cin, message);

    cout << "==============================================" << endl;
    
    cout << "Encrypting....." << endl;
    for(char c : message) {
        size_t index = mapping.find(c);        
        encryptedMessage += (index != string::npos) ? secret.at(index) : c;
    }
    cout << "Encrypted Message: " << encryptedMessage << endl << endl;
    
    cout << "Decrypting....." << endl;
    for(char c : encryptedMessage) {
        size_t index = secret.find(c);        
        decryptedMessage += (index != string::npos) ? mapping.at(index) : c;
    }
    cout << "Decrypted Message: " << decryptedMessage << endl << endl;

    return 0;
}