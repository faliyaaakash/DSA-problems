class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long pmass=mass;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]<=pmass){
                 pmass+=asteroids[i];
            }else{
                pmass=0;
                return false;
            }
        }
        return true;
    }
};