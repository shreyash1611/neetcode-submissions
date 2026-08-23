class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> nge;
        int n = temperatures.size();
        vector<int> aaa(n);
        for(int i=n-1;i>=0;i--){
            while(!nge.empty() and temperatures[nge.top()] <= temperatures[i] ){
                nge.pop();
            }
            
            if(!nge.empty()) {
                aaa[i] = nge.top() - i;
            }
            nge.push(i);
        }
        
        return aaa;
    }
};
