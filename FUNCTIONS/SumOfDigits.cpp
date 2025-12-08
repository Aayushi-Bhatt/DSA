#include<iostream>
using namespace std;

int SumOfDigits(int num){
    int DigiSum=0;

    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        DigiSum+=lastDigit;
    }
    return DigiSum;
}

int main(){
    cout<<"sum of digits of number is :"<<SumOfDigits(145);
    return 0;
}