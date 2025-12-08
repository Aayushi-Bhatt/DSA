#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"enter the number :\n";
    cin>>n;

    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(i==5){
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}