/**************************
 Description    :  Merge Sort
 Date                :  05 Aug, 2019
 **************************/
 
 #include<iostream>
 #include<math.h>
 
 using namespace std;
 
 
 //Merging the sub-arrays
 
 void  Merge(int arr[], int low, int mid, int high){
     
     int leftIndex{0}, rightIndex{0},mergeIndex{0};
     int size1=mid-low+1;           //size of first sub-array
     int size2=high-mid;            //size of Second sub-array
     
     //Temp array to store sub-arrays array
     int left[size1], right[size2];
     
     for(int  i=0;i<size1;i++)
         left[i]=arr[low+i];
    for(int j=0;j<size2;j++)
        right[j]=arr[low+mid+j];
        
        while(leftIndex<size1 && rightIndex<size2){
            if(left[leftIndex]<right[rightIndex]){
                arr[mergeIndex]=left[leftIndex];
                leftIndex++;
            }
            else{
                arr[mergeIndex]=right[rightIndex];
                rightIndex++;
            }
            mergeIndex++;
        }
        
        while(leftIndex<size1){
            arr[mergeIndex]=left[leftIndex];
            leftIndex++;
            mergeIndex++;
        }
        
        while(rightIndex<size2){
            arr[mergeIndex]=right[rightIndex];
            rightIndex++;
            mergeIndex++;
        }
     
 }
 
 //Sorting the sub-arrays
 
 void MergeSort(int arr[], int low, int high){
     if(low<high){
         int mid=floor((low+high))/2;
         MergeSort(arr, low, mid);
         MergeSort(arr, mid+1, high);
         Merge(arr, low, mid,high);
     }
 }
 
 
 //Printing the sorted array 
 
 void PrintArray(int arr[], int size){
     cout<<"[ ";
     for(int i=0;i<size;i++)
         cout<<arr[i]<<" ";
    cout<<"]";
 }
 
 int main(){
     int arr[5]={2,0,1,7,4};
     int size=sizeof(arr)/sizeof(arr[0]);
     
     cout<<"Array is : ";   PrintArray(arr,size);
     MergeSort(arr,0,4);
     cout<<"Sorted array is : ";    PrintArray(arr,size);
     
     cout<<endl;
     return 0;
 }