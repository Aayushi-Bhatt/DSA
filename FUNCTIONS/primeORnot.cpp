#include<iostream>
using namespace std;

void primeORnot(int n){
    bool isPrime=true;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime==true){
        cout<<"prime number\n";
    }else{
        cout<<"non-prime number";
    }
}

int main(){
    primeORnot(11);
    return 0;
}
