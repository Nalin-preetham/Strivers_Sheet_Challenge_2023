#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
  unordered_map<int,int> mp;
  int sum=0;
  mp[0]=1;
  int cnt=0;
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
      sum^=arr[i];
      if(mp.find(sum^x)!=mp.end())
      {
          cnt+=mp[sum^x];
      }
      mp[sum]++;
  }
  return cnt;
}
