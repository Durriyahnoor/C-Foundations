#include <iostream>
using namespace std;
int main() {
    
    //at sender end, that we want to send to the receiver end .
    char firstLetter = 'M' ;   // 'M' for Maryam
    char secondLetter = 'A' ;   // 'A' for Akhtar

        
    //cryptographic or security key ,not known to the hacker ,used for encryption and decryption of the message.
    int securityKey = 9 ;  //security key for encryption and decryption of the message.

    //PHASE 1 : ENCRYPTION OF THE MESSAGE AT SENDER END [locking the data]
   //we add this security key to the ASCII value of the letters of the message to be sent to the receiver end.
  //this process will convert the letters of the message into some other letters which will be sent to the receiver end.
   char encryptedFirstLetter = firstLetter + securityKey ;
   char encryptedSecondLetter = secondLetter + securityKey ;

   //PHASE 2 : DECRYPTION OF THE MESSAGE AT RECEIVER END [unlocking the data]
  //we subtract this security key from the ASCII value of the letters of the encrypted message received from the sender end.
 //this process will convert the letters of the encrypted message into the original letters of the message sent by the sender end.
   char decryptedFirstLetter = encryptedFirstLetter - securityKey ;
   char decryptedSecondLetter = encryptedSecondLetter - securityKey ;

    cout<<"=================================================================" << endl;
    cout<<"                   *** WHISPER LOCK ***                  " << endl;
    cout<<"=================================================================" << endl;
    
    cout<<" [SYSTEM] Security layer status:Operational (stable) " << endl;   
    // security layer status is working and stable or reliable.

    cout<<" [SYSTEM] Cryptography protocol: Caesar Cipher Shift" << endl;   
    // the cryptography protocol used for encryption and decryption of the message is Caesar Cipher Shift.

    cout<<"-----------------------------------------------------------------" << endl;
    cout<<" Ingested data stream: " << firstLetter << " , " << secondLetter << endl;  
    // the original message to be sent to the receiver end [real input] .

    cout<<" [!]  Initializing Caesar Cipher Shift (+"<< securityKey<<")....." << endl; 
    // the security key used for encryption and decryption of the message is +9.

    cout<< " Cipher Data Stream : " << encryptedFirstLetter << " , " << encryptedSecondLetter  << endl;
    // ASCII value of M is 77, by adding the security key 9 to it, we get 86 which is the ASCII value of V.
    // ASCII value of A is 65, by adding the security key 9 to it, we get 74 which is the ASCII value of J.

    cout<< " [!]  Authenticating security token matrix (-"<< securityKey <<")....." << endl;
    //checking whether the security key used for encryption and decryption of the message is 9 or not.

    cout<<" Recovered Data Stream : " << decryptedFirstLetter << " , " << decryptedSecondLetter << "   [Decrypted OK] " << endl;

    cout<<"=====================================================================" << endl;
    cout<<"               Maryam's Whisper Lock Cryptography Engine             " << endl;
    cout<<"=====================================================================" << endl;

    return 0;
}
