#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[7]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){                             //time complexit:O(n^2)
        int curSum=0;
        for(int end=st;end<n;end++){
            curSum+=arr[end];
            maxSum=max(curSum,maxSum);
        }
    }
    cout<<"maximum subarray sum : "<<maxSum;
    return 0;
}