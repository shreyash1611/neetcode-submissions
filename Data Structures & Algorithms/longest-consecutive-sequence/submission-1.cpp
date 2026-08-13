class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        unordered_map<int,int> aa;
        set<int> s;
        for(int i:nums) aa[i]++;
        int maxlen = 1;
        for(auto [x,y]:aa){
            if(aa.count(x-1)) continue; // not start of this chain
            if(s.count(x)) continue; // we've parsed this chain
            s.insert(x);
            int curlen = 1;
            int k = x;
            while(aa.count(k+1)){
                curlen++;
                s.insert(k+1);
                k++;
            }


            maxlen = max(maxlen, curlen);

        }
        return maxlen;
    }
};
