#include<iostream>
using namespace std;

bool isprime(int n){
     bool isPrime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;

        }
    }
}

void printAllPrimeNumbers(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    printAllPrimeNumbers(10);
    return 0;
}