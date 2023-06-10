#include <bits/stdc++.h> 
void solve(vector<int> &nums,vector<int> &ans,int i,int sum,int n)
{
    if(i>=n)
    {
        ans.push_back(sum);
        return ;
    }
    solve(nums,ans,i+1,sum+nums[i],n);
    solve(nums,ans,i+1,sum,n);
}
vector<int> subsetSum(vector<int> &num)
{ 
    vector<int> ans;
    solve(num,ans,0,0,num.size());
    sort(ans.begin(),ans.end());
    return ans;
}
