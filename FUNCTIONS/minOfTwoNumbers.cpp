#include<iostream>
using namespace std;

int minOfTwo(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int main(){
    cout<<"min between a and b is :"<<minOfTwo(20,30);
    return 0;
}