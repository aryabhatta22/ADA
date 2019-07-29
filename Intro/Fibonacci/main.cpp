/**************************
 Description    :  Find 
  *                                 i) nth term of a fibonnaci series (recursively & iteratively)
  *                                 ii) Generate fibonacci series to n ( where n is very large number)
 Date                :  29 July, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 int fibRec(int n){
     if(n<=1)
         return n;
    return fibRec(n-1)+fibRec(n-2);
 }
 
 int fibItr(int n){
     int next{1} , cur{0}, prev{0};
     for(int i=2;i<=n;i++){
         cur=prev+next;
         prev=next;
         next=cur;
     }
     return cur;
 }
 
 int main(){
     int n{0};
     
     cout<<"Enter a number";
     cin>>n;
     
     cout<<"Term (Using Recursive function) : "<<fibRec(n)<<endl;
     cout<<"Term (Using Iterative function) : "<<fibItr(n)<<endl;
     
     cout<<endl;
     return 0;
 }