/**************************
 Description    :   Search element in a sorted matrix  O(n)
 Date                :  20 Aug, 2019
 **************************/
 
 #include<iostream>
 
 using namespace std;
 
 int SearchInMatrix(int mat[][4], int key, int row, int col) {
     int i=0;
     int j=col-1;
     bool found=false;
     while(i<row && j>=0) {
         if(mat[i][j]==key){
             found=true;
             cout<<"Index are "<<i<<" "<<j<<endl;
             return 1;
         }
         else{
                if(mat[i][j]>key)
                    j--;
                else
                    i++;
            }
             
     }
     
     if(!found)
         return -1;
 }
 
 int main(){
     
     int arr[4][4]={
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                             };
     int found{0};
     
     found=SearchInMatrix(arr,10,4,4);
     if(found)
         cout<<"Not Found";
     cout<<endl;
     return 0;
 }