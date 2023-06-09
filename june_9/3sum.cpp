#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++){
		if(i!=0 && arr[i]==arr[i-1])
		continue;
        int low=i+1;
		int high=n-1;
		while(low<high)
		{
			int sum=arr[i]+arr[low]+arr[high];
			if(sum==K)
			{
				vector<int> temp={arr[i],arr[low],arr[high]};
				ans.push_back(temp);
				low++;
				high--;
				while(low<high && arr[low]==arr[low-1])
				{
					low++;
				}
				while(low<high && arr[high]==arr[high+1])
				high--;
			}
			else if(sum<K)
			low++;
			else
			high--;
		}
	  
	}
	return ans;
}
