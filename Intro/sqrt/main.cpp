/**************************
 Description :  To find square root of a number Complexity O(logn)
 Date             :  30 July, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 
     //Binary Search of sqaure root

float Sqrt(int start, int end){
    float num=end;
    float mid{0}, ans{0}; 
    while(start<=end) {
         mid=(start+end)/2;
         
         if(mid*mid==num)
             return mid;
        else {
            if(mid*mid<num){
                start=(mid+1);
                ans=mid;
            }
            else
                end=(mid-1);
        }
     }
     
     return ans;
}
 
 int main(){
     float num{0};
     
     cout<<"Enter number: ";
     cin>>num;
     
     cout<<"Sqrt is: "<<Sqrt(0, num);
     cout<<endl;
     return 0;
 }