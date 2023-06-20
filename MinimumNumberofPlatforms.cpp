int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0;
    int j=0;
    int maxi=0;
    int p=0;
    while(i<n && j<n)
    {
        if(dt[i]>=at[j])
        {
            p++;
            j++;
        }
        else
        {
            p--;
            i++;
        }
        maxi=max(maxi,p);
    }
    return maxi;
}
