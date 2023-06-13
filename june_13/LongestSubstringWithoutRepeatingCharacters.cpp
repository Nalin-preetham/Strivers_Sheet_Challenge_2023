#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int cnt=0;
    int j=0;
    string ans="";
    int i=0;
    for(;i<input.length();i++)
    {
        if(ans.empty())
        {
            j=i;
            ans+=input[i];
            continue;
        }
       if(ans.find(input[i])==string::npos)
       ans+=input[i];
       else
       {
           int k=0;
             while(input[i]!=ans[k])
             {
                 k++;
             }
             ans.erase(ans.begin(),ans.end());
             cnt=max(cnt,i-j);
             j=j+k;
          i=j;
       }
           
    }
    return max(cnt,i-j);


    
}
