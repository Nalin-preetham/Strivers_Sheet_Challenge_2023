#include <bits/stdc++.h> 
 bool isvalid(string s,int ind,int i)
    {
        while(ind<i)
        {
            if(s[ind++]!=s[i--])
            return false;
        }
        return true;
       
    }
    void solve(string s,vector<vector<string>> &ans,vector<string> &temp,int ind,int n)
    {
        if(ind>=n)
        {
        ans.push_back(temp);
        return ;
        }

        for(int i=ind;i<n;i++)
        {
            if(isvalid(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                solve(s,ans,temp,i+1,n);
                temp.pop_back();
            }
        }
    }
vector<vector<string>> partition(string &s) 
{
    vector<vector<string>> ans;
    vector<string> temp;
    solve(s,ans,temp,0,s.length());
    return ans;
}
