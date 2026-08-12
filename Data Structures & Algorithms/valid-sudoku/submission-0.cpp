class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int> mp;
        int n = 9;
        for(int i=0;i<n;i++){
            mp.clear();
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(mp.count(board[i][j]-'0')) return false;
                mp[board[i][j] - '0']++;
            }

        }
        for(int j=0;j<n;j++){
            mp.clear();
            for(int i=0;i<9;i++){
                if(board[i][j]=='.') continue;
                if(mp.count(board[i][j]-'0')) return false;
                // mp[i][j]++;
                mp[board[i][j] - '0']++;
            }

        }
        
        vector<int> starts = {0, 3, 6};

        for(int r : starts) {
            for(int c : starts) {
                mp.clear(); 
                for(int i = r; i < r + 3; i++) {
                    for(int j = c; j < c + 3; j++) {
                        if(board[i][j] == '.') continue;
                        if(mp.count(board[i][j] - '0')) return false;
                        mp[board[i][j] - '0']++;
                    }
                }
                
            }
        }
        return true;
    }
};
