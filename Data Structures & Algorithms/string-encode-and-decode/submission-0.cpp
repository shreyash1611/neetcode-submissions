class Solution {
public:

    string encode(vector<string>& strs) {
        // encode decode
        string res = "";
        for(string s:strs){
            int z = s.length();
            string zz =to_string(z);
            res = res+zz;
            res = res+'#'+s; 
        }
        cout<<res;
        return res;
    }

    vector<string> decode(string s) {
        // encode decode
        vector<string> res;
        int i = 0;
        while(i<s.length()){
            int len = 0;
            while(i<s.length() and s[i]!='#'){
                len*=10;
                len+=s[i]-'0';
                i++;
            }
            i++;
            string z = "";
            int in = i;
            for(i=in;i<in+len;i++){
                z+=s[i];    
            }
            res.push_back(z);
            // i++;
        }
        return res;
    }
};
