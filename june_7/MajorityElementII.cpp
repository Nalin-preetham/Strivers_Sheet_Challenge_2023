#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int cnt1=0;
    int cnt2=0;
    int element1=0;
    int element2=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(element1==arr[i])
        {
            cnt1++;
        }
        else if(element2==arr[i])
        {
            cnt2++;
        }
        else if(cnt1==0)
        {
            element1=arr[i];
            cnt1++;
        }
        else if(cnt2==0)
        {
            element2=arr[i];
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0;
    cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(element1==arr[i])
        cnt1++;
        if(element2==arr[i])
        cnt2++;
    }
    vector<int> ans;
    if(cnt1>n/3 && cnt2>n/3)
    {
        ans.push_back(element1);
        ans.push_back(element2);
    }
    else if(cnt1>n/3 && cnt2<=n/3)
    {
        ans.push_back(element1);
    }
    else if(cnt1<=n/3 && cnt2>n/3)
    {
        ans.push_back(element2);
    }
    return ans;


}
