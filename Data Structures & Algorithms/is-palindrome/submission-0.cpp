class Solution {
public:
    bool woah(int l, int r, string &res){
        if(l>=r) return true;
        if(res[l]!=res[r]) return false;
        return woah(l+1,r-1,res);
    }
    bool isPalindrome(string s) {
        string res = "";
        for(char c:s){
            if(c==' ' or !isalnum(c)) continue;
            if(c>='A' and c<='Z') {c-='A'; c+='a';}
            res.push_back(c);
        }
        // cout<<res;
        return woah(0,res.length()-1,res);
    }
};
