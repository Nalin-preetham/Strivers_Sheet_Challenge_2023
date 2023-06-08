#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
       sort(arr.begin(),arr.end());
       int cnt=1;
       int maxi=1;
     for(int i=1;i<n;i++)
     {
         if(arr[i]==arr[i-1])
         continue;
         if(arr[i-1]+1==arr[i])
         cnt++;
         else
         cnt=1;
         maxi=max(cnt,maxi);
     }
           return maxi;
}
