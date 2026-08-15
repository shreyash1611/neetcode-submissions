class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> fq;
        if(s2.length()<s1.length()) return false;
        for(char &c:s1) fq[c]++;
        int l = 0;
        int i = 0;
        for(i=0 ; i<s1.length(); i++){
            fq[s2[i]]--; 
            if(fq[s2[i]]==0) fq.erase(s2[i]);    // negative wont clear
        } 
        if(fq.empty()) return true;
        i--;
        int r=i; // // resets the window 1
        i = 0; // resets the window 2
        while(r<s2.length()-1){
            r++;
            fq[s2[r]]--;
            if(fq[s2[r]]==0) fq.erase(s2[r]);
            fq[s2[l]]++;
            if(fq[s2[l]]==0) fq.erase(s2[l]);
            l++;
            if(fq.empty()) return true;

        }
        return false;
    }
};
