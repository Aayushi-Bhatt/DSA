#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSUM(vector<int>& nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0,j=n-1;

    while(i<j){
        int pairSUM=nums[i]+nums[j];
        if(pairSUM>target){
            j--;
        }else if (pairSUM<target)
        {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=18;
    vector<int> ans= pairSUM(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}