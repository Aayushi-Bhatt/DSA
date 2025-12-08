#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=64;i<68;i++){
        for(int j=i+1;j>=65;j--){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}