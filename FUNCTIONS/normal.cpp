#include<iostream>
using namespace std;

int sumFrom1ToN(int n){
    int sum=0;
    for(int i=0; i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<"sum form t to n :"<<sumFrom1ToN(5);
}