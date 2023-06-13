#include <bits/stdc++.h> 
void solve(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int ind,int n)
{
    
        ans.push_back(temp);
    
    for(int i=ind;i<n;i++)
    {
        if(i!=ind && arr[i]==arr[i-1])
        continue;
          temp.push_back(arr[i]);
          solve(arr,ans,temp,i+1,n);
          temp.pop_back();

    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
      solve(arr,ans,temp,0,n);
      return ans;
}
