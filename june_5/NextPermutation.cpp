#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int> ans=permutation;
    int i;
    for(i=n-2;i>=0;i--)
    {
        if(ans[i]<ans[i+1])
        {
            break;
        }
    }
    if(i==-1)
    {

        reverse(ans.begin(),ans.end());
    }
    else
    {
     
        for( int j=n-1;j>i;j--)
        {
            if(ans[j]>ans[i])
            {
                swap(ans[j],ans[i]);
                break;
            }
        }
        reverse(ans.begin()+i+1,ans.end());

    }
    return ans;
}
