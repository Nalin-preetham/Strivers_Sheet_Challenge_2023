#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0;
	int element=0;
	for(int i=0;i<n;i++)
	{
		if(cnt==0)
		{
			element=arr[i];
		}
		
	   if(element==arr[i])
		{
			cnt++;
		}
		else
		cnt--;
	}
	cnt=0;
	for(int i=0;i<n;i++)
	{
		if(element==arr[i])
		cnt++;
	}
	
     if(cnt>(n/2))
	 return element;
	 else
	 return -1;
}
