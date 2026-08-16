class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> biits(128);
        // vector<int> biits(128);
        int minlen = 1e9+5;
        if(s.length()<t.length()) return "";
        for(char c:t) biits[c]++;
        int req = t.length();
        // vector<int> snapshot(128);
        // snapshot = biits;
        int l = 0;
        int r = 0;
        int si = 0;
        while(r<s.length()){
            if(biits[s[r]]>0){
                
                req--;
            }
            biits[s[r]]--;

            while(!req){
                if(minlen > r - l + 1){
                    si = l;
                    minlen = r - l + 1;
                }
                
                biits[s[l]]++;
                if(biits[s[l]] > 0){
                    req++;
                }
                
                l++;
            }
            r++;
        }
        return minlen==1e9+5? "": s.substr(si,minlen);
    }
};
