class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a(nums.begin(),nums.end());
        return a.size() != nums.size();
    }
};