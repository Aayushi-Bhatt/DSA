#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cout<<"enter the number:\n";
    cin>>n;
    

    for(int i=0; i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<"sum of numbers divisible by 3:"<<sum<<endl;
    return 0;

}