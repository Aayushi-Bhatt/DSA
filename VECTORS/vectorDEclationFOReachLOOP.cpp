#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>vec={'a','b','c','d','e'};
    for(char ch:vec){
        cout<<ch<<endl;
    }
    return 0;
}