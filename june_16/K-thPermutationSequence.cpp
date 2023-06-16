#include<vector>
string kthPermutation(int n, int k) {
    vector<int> nums;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
        nums.push_back(i);
    }
    fact=fact/n;
    k=k-1;
    string ans="";
    while(1)
    {
        ans+=nums[k/fact]+'0';
        nums.erase(nums.begin()+k/fact);
        if(nums.size()==0)
        break;
        k=k%fact;
        fact=fact/nums.size();
        
    }
    return ans;
}
