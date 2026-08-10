class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // group anagrams
        unordered_map<string,vector<string>> zz;
        for(string s: strs){
            string c = s;
            sort(c.begin(),c.end());
            zz[c].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto z:zz){
            ans.push_back(z.second);
        }
        return ans;
    }
};
