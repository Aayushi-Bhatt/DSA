#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number:\n";
    cin>>n;
    bool isPrime=true;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"prime number";
    }else{
        cout<<"non-prime number";
    }
}