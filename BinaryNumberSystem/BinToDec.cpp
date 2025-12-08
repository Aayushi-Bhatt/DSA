#include<iostream>
using namespace std;

int BinToDec(int BinNum){
    int ans=0;
    int pow=1;
    while(BinNum>0){

    int rem = BinNum%10;
    BinNum=BinNum/10;

    ans=ans+(rem*pow);
    pow*=2;
    }
    return ans;

}

int main(){
    cout<<" decimanl number of binary conversion is : "<<BinToDec(101);
    return 0;
}