/**************************
 Description    :  To encrypt code as 'jamia' -> 'kznhb' 
  *                             & decrypt 'kznhb' -> 'jamia'
 Date                :  06 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<string.h>
 
 using namespace std;
 
 void encryptString(char str[], int size){
     for(int i=0;i<size;i++){
         if(i%2==0){
             if(str[i]=='z'||str[i]=='Z')
                 str[i]=static_cast<char>(str[i]-25);
            else
             str[i]=static_cast<char>(str[i]+1);
         }
         else{
             if(str[i]=='a'||str[i]=='A')
                 str[i]=static_cast<char>(str[i]+25);
            else
                str[i]=static_cast<char>(str[i]-1);
         }
     }
 }
 
 void decryptString(char str[], int size){
     for(int i=0;i<size;i++){
         if(i%2==0){
             if(str[i]=='a'||str[i]=='A')
                 str[i]=static_cast<char>(str[i]+25);
            else
             str[i]=static_cast<char>(str[i]-1);
         }
         else{
             if(str[i]=='z'||str[i]=='Z')
                 str[i]=static_cast<char>(str[i]-25);
            else
             str[i]=static_cast<char>(str[i]+1);
         }
     }
 }
 
 int main(){
     
     char str[256];
     cout<<"Enter string : ";
     cin>>str;
     encryptString(str,strlen(str));
     cout<<"Encrypted String : "<<str<<endl;
     
     decryptString(str,strlen(str));
     cout<<"Decrypted String : "<<str;
     
     
     cout<<endl;
     return 0;
 }