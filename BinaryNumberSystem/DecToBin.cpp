#include<iostream>
using namespace std;

int DecToBin(int decNum){
    int ans=0;
    int pow=1;

    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans=ans+(rem*pow);
        pow*=10;
    }
    return ans;
}

int main(){
    cout<<" Binary conversion of decimal number is :"<<DecToBin(4);
    return 0;
}