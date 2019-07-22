#include<bits/stdc++.h>

using namespace std;


void permute(string str, int start, int end) {              //start=string index    end=last index
    
        if(start==end)
            cout<<str<<endl;

        else {

            for(int i=start;i<=end;i ++) {
                
                
                swap(str[start], str[i]);
                
                permute(str, start+1, end);
                
                swap(str[start],str[i]);
                
            }
        }
}

int main() {
    string str= "ABC";
    int n=str.size();
    permute(str, 0, n-1);
    return 0;
}