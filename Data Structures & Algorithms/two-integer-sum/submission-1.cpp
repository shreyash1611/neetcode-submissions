class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // two sum
        unordered_map<int,int> aa;
        int i=0;
        for(int n:nums) {
            aa[n] = i;
            i++;
        }
        for(i=0;i<nums.size();i++){
            if(aa.count(target-nums[i])){
                if(i!=aa[target-nums[i]]) return {i,aa[target-nums[i]]};
            }
        }
        return {0,1};
    }
};
