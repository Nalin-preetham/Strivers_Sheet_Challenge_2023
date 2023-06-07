#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  int cnt=0;
  unordered_map<int,int> mp;
  int sum=0;
  mp[0]=-1;
  for(int i=0;i<arr.size();i++)
  {
    sum+=arr[i];
    if(mp.find(sum)!=mp.end())
    {
      cnt=max(cnt,i-mp[sum]);
    }
    if(mp.find(sum)==mp.end())
    mp[sum]=i;
  }
  return cnt;

}
