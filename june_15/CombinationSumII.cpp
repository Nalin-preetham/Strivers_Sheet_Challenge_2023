#include<bits/stdc++.h>
void solve(vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp,int ind,int n,int target)
{
	if(target==0)
	{
		ans.push_back(temp);
		return;
	}
	for(int i=ind;i<n;i++)
	{
		if(i!=ind && arr[i]==arr[i-1])
		continue;
		if(target-arr[i]<0)
		break;
		temp.push_back(arr[i]);
		solve(arr,ans,temp,i+1,n,target-arr[i]);
		temp.pop_back();
	}
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> temp;
	solve(arr,ans,temp,0,n,target);
	return ans;

}

