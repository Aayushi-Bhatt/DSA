#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the char:\n";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"uppercase\n";
    }else{
        cout<<"lowercase\n";
    }
    return 0;
}