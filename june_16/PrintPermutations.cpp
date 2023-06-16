#include <bits/stdc++.h> 
void solve(string &s,vector<string> &ans,vector<int> &vis,string temp,int ind,int n)
{
    if(ind>=n)
    {
      ans.push_back(temp);
      return ;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==-1)
        {
            vis[i]=1;
            solve(s,ans,vis,temp+s[i],ind+1,n);
            vis[i]=-1;
        }
    }
}
vector<string> findPermutations(string &s) {
    sort(s.begin(),s.end());
    vector<string> ans;
    vector<int> vis(s.length(),-1);
    string temp="";
    solve(s,ans,vis,temp,0,s.length());
    return ans;
}
