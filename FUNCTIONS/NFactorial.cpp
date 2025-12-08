#include<iostream>
using namespace std;

int NFactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout<<" factorial of number N : "<<NFactorial(5);
}