#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:

    int majorityELEMENT(vector<int>& nums){
        int n=nums.size();
        for(int val:nums){
            int freq=0;
            for(int elem:nums){
                if(val==elem){
                    freq++;
                }
            }
            if(freq>n/2){
                return val;
            }
        }
    }
};

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    Solution s1;
    cout<<s1.majorityELEMENT(nums);
    return 0;


}