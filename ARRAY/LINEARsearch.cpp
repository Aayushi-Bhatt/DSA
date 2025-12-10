#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={22,-100,40,69,80};
    int size=5;
    int target=40;
    cout<<linearSearch(arr,size,target);
    return 0;
}