void solve(vector<int> &arr,vector<vector<int>> &ans,int ind,vector<int> &temp,int n,int k)
{
    if(ind>=n)
    {
        if(k==0)
        {
            ans.push_back(temp);
        }
        return ;
    }
    temp.push_back(arr[ind]);
    solve(arr,ans,ind+1,temp,n,k-arr[ind]);
    temp.pop_back();
     solve(arr,ans,ind+1,temp,n,k);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(arr,ans,0,temp,n,k);
    return ans;
}
