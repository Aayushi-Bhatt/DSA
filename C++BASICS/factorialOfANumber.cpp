#include<iostream>
using namespace std;

int main(){
    long long int n;
    cout<<"enter the number: \n";
    cin>>n;
    long long int fact=1;

    for(long long int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}