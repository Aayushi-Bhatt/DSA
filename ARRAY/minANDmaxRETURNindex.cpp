#include<iostream>
#include<climits>
using namespace std;

int smallINDEX(int nums[],int size){
    int smallest=INT_MAX;
    int index=-1;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index=i;
        }  
    }
    return index;;
}

int largeINDEX(int nums[],int size){
    int largest=INT_MIN;
    int index=-1;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];   
            index=i;;
        }  
    }
    return index;
}

int main(){
    int nums[]={34,-55,34,56,100};
    int size=5;

    cout<<smallINDEX(nums,size)<<endl;
    cout<<largeINDEX(nums,size);
    return 0;
}