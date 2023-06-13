#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> time;
    for(int i=0;i<start.size();i++)
    {
        time.push_back({finish[i],start[i]});
    }
    sort(time.begin(),time.end());
    int endtime=-1;
    int cnt=0;
    for(int i=0;i<time.size();i++)
    {
        if(time[i].second>=endtime)
        {
            endtime=time[i].first;
            cnt++;
        }
    }
    return cnt;
}
