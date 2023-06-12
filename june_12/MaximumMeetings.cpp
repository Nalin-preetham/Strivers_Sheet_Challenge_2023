#include <bits/stdc++.h>

bool cmp(const pair<int, pair<int,int>>& a, const pair<int, pair<int,int>>& b) {

    if(a.first<b.first) return true;

    else if(a.first>b.first) return false;

    else if(a.second.second<b.second.second) return true;

    else return false;

}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<pair<int,pair<int,int>>> meet;
    for(int i=0;i<start.size();i++)
    {
        meet.push_back({end[i],{start[i],i+1}});
    }
    sort(meet.begin(),meet.end(),cmp);
    vector<int> ans;
    int endtime=-1;
    for(int i=0;i<meet.size();i++)
    {
        if(endtime<meet[i].second.first)
        {
            endtime=meet[i].first;
            ans.push_back(meet[i].second.second);
        }
    }
    return ans;
}
