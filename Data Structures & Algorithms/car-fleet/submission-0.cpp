typedef pair<int,int> pii;
class Solution {
public:
    float timetaken(int pos, int speed){
        float res = ((float)pos)/((float)(speed));
        return res;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pii> car(n);
        for(int i=0;i<n;i++){
            car[i] = {position[i],speed[i]};
        }
        ranges::sort(car);
        ranges::reverse(car);
        stack <float> z;
        for(int i=0;i<n;i++){
            float tima = timetaken(target-car[i].first,car[i].second);
            if(z.empty()) z.push(tima);
            else if(z.top()<tima){
                z.push(tima);
            }
            
        }

        return z.size();
    }
};
