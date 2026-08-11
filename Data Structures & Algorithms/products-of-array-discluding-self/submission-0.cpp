class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = count(nums.begin(),nums.end(),0);
        if(zeros>=2){
            vector<int> s(nums.size());
            return s;
        }
        int n =  nums.size();
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        pre[0] = suf[n-1] = 1;
        for(int i=1,j=n-2;i<n and j>-1;i++,j--){
            pre[i] = pre[i-1]*nums[i-1];
            suf[j] = suf[j+1]*nums[j+1];
        }
        vector<int> s(nums.size());

        for(int i=0;i<nums.size();i++){
            s[i] = pre[i]*suf[i];
        }
        return s;
    }
};
