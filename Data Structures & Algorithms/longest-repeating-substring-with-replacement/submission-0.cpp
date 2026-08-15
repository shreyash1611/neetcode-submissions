class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> runsum(26,0);
        int totalplaced = 0; // totally used in the window
        int maxlen = 0;
        int l =0;
        int maxf = 0;
        for(int i=0;i<s.length();i++){
            runsum[s[i]-'A']++;
            totalplaced++;
            maxf = max(maxf, runsum[s[i]-'A']);
            while(totalplaced>maxf+k){
                runsum[s[l]-'A']--;
                l++;
                totalplaced--;
            }
            maxlen = max(maxlen,i-l+1);
        }
        return maxlen;
    }
};
