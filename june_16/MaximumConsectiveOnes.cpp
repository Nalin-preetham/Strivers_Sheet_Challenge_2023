int longestSubSeg(vector<int> &arr , int n, int k){
    int maxi=0;
    int j=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt++;
        }
        if(cnt>k)
        {
            while(arr[j]!=0)
            {
                j++;
            
            }
            cnt--;
            j++;

        }

         maxi=max(maxi,i-j+1);
    }
    return maxi;

}
