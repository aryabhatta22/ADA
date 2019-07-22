#include<iostream>

using namespace std;

int horner(int poly[],  int n, int x) {     //poly[]= coefficient of polynomial
                                                                             //n = number terms in polynomial
                                                                             //x = value of variable
                                                                             
                int result = poly[0];
                
                for(int i=1;i<n;i++)
                    result = result*x+poly[i];      //key expression
                
                return result;
}

int main(){
    
    int poly[] = {1,2 ,3,4};        //coefficient of polynomial
    int x=4;
    int n=sizeof(poly)/sizeof(poly[0]);         //number of terms 
    
    cout<<"Values of polynomial is "<< horner(poly,n,x)<<endl;
    
    return 0;
    
}