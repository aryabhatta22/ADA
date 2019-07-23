/**************************
 Description :  Creating a Truth table combination
 Date                :  23 Jul, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 void PrintTable(int n) {
     
     int combinations=(pow(2,n))-1;
     
     bool  *arr;
     arr= new bool[n];
     
     for(int i=0;i<n;i++) {
         arr[i]=false;
     }
     
     cout<<boolalpha;
     
     for(int i=0;  i<=combinations;i++){
         int j=n-1;
         int k=i;
         
         while(k!=0){
             if(k%2==1)
                 arr[j]=true;
                else
                    arr[j]=false;
                    
            j=j-1;
            k/=2;
         }
         
         for(int i=0;i<n;i++){
             cout<<arr[i]<<"\t|| \t";
         }
         
         cout<<endl;
     }
 }
 
 int main(){
     
     PrintTable(3);
     
     cout<<endl;
     return 0;
 }