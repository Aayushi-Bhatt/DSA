#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int maximumSubarray(vector<int>& nums){
        int currSUM=0,maxSUM=INT_MIN;
        for(int val:nums){
            currSUM+=val;
            maxSUM=max(currSUM,maxSUM);
            if(currSUM<0){
                currSUM=0;
            }
        }
        return maxSUM;
    }
};

int main(){
    vector<int> nums={3,-4,5,4,-1,7,-8};
    Solution s1;
    cout<<s1.maximumSubarray(nums);
    return 0;
}