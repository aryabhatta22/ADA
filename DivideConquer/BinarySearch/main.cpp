/**************************
 Description    :  Binary Search Complexity O(logn)
 Date                :  05 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 int BinarySearch(int arr[], int low, int high, int key){
     if(low<=high){
             int mid=floor((low+high)/2);
             if(arr[mid]==key)
                 return mid;
            else{
                    if(arr[mid]<key)
                        BinarySearch(arr, mid+1,high,key);
                    else
                        BinarySearch(arr,low,mid-1,key);
                    }
     }
     else
        return -1;

 }
 
 int main(){
     
     int arr[5]={1,2,3,4,5};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<"Element found at index: "<<BinarySearch(arr,0,n,4)<<endl;
     
     
     cout<<endl;
     return 0;
 }