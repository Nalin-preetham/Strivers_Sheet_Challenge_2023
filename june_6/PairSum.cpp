#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
  unordered_map<int,int> mp;
vector<vector<int>> ans;
  for(int i=0;i<arr.size();i++)
  {
     if(mp[s-arr[i]])
     { 
        int val=mp[s-arr[i]];
        vector<int> temp;
        temp.push_back(min(arr[i],s-arr[i]));
        temp.push_back(max(arr[i],s-arr[i]));
        while(val--)
        {
           ans.push_back(temp);
        }
     }
     mp[arr[i]]++;
  }
  sort(ans.begin(),ans.end());
  return ans;
}
