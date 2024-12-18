#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int c = 0;
        for(auto x:nums)
        {
            pq.push({x,c});
            c++;
        }
        while(k--)
        {
            int temp  = pq.top().first * multiplier;
            int temp2 = pq.top().second;
            pq.pop();
            pq.push({temp,temp2});
        }
        vector<int> ans(pq.size());

        while(!pq.empty()){
            ans[pq.top().second] = pq.top().first;
            // ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};