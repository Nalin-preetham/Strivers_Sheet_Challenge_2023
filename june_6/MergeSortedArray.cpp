#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(j>=0 && i>=0)
	{
          if (nums1[i] > nums2[j]) 
		  {
			  nums1[k]=nums1[i];
			  k--;
			  i--;
          }
		  else
		  {
			  nums1[k]=nums2[j];
			  k--;
			  j--;
		  }
    }
	while(j>=0)
	{
      nums1[k]=nums2[j];
	  k--;
	  j--;
	}
	return nums1;
	
}
