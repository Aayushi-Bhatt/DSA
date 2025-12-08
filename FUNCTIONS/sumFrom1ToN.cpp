#include<iostream>
using namespace std;

int sum1ToN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
         sum =sum+i;
        
    }
    return sum;
    
}

int main(){
    cout<<"sum from one to n :"<<sum1ToN(5);
    return 0;
}