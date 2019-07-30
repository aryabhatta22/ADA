/**************************
 Description    :  Find 
  *                                 i) nth term of a fibonnaci series (recursively & iteratively)
  *                                 ii) Generate fibonacci series to n ( where n is very large number)
 Date                :  29 July, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 int fibRec(int n){             // T(n) = T(n-1) + T(n-2)
     if(n<=1)
         return n;
    return fibRec(n-1)+fibRec(n-2);
 }
 
 int fibItr(int n){                 // O(n)
     int next{1} , cur{0}, prev{0};
     if(n<=1)
         return n;
     for(int i=1;i<n;i++){
         cur=prev+next;
         prev=next;
         next=cur;
     }
     return cur;
 }
 
 int main(){
     long int n{0};
    long int terms{0};
     
     cout<<"Enter a number";
     cin>>n;
     
     cout<<"Term (Using Recursive function) : "<<fibRec(n)<<endl;
     cout<<"Term (Using Iterative function) : "<<fibItr(n)<<endl;
     
     //Generating fibbonaci series
     cout<<"Enter number of terms: ";
     cin>> terms;
     cout<<"Using Iteration: \n-------------------------------------------"<<endl;
     for(int i=1;i<=terms;i++) {
         cout<<fibItr(i)<<" ";
     }
     
     cout<<endl;
     cout<<"Using Recursion: \n-------------------------------------------"<<endl;
     for(int i=1;i<=terms;i++) {
         cout<<fibRec(i)<<" ";
     }
     
     cout<<endl;
     return 0;
 }