#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
      vector<int> ans;
	  priority_queue<int> maxheap;
	  priority_queue<int,vector<int>, greater<int>> minheap;
	  for(int i=0;i<k;i++)
	  {
		  maxheap.push(arr[i]);
		  minheap.push(arr[i]);
	  }
	   for(int i=k;i<n;i++)
	   {
		   if(maxheap.top()>arr[i])
		   {
			   maxheap.pop();
			   maxheap.push(arr[i]);
		   }
		   if(minheap.top()<arr[i])
		   {
			   minheap.pop();
			   minheap.push(arr[i]);
		   }
	   }
	 ans.push_back(maxheap.top());
	 ans.push_back(minheap.top());
	  return ans;
	
}
