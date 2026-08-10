class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // vector<pair<int,int>> aa(1e4+2);
        // top k frequent
        unordered_map<int,int> a;
        for(int i:nums) a[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto i:a){
            pq.push({i.second,i.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};