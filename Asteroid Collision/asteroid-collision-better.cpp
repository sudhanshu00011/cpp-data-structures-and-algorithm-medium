class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int i=0;
        while (i+1<asteroids.size()) {
            if (asteroids[i]>0 && asteroids[i+1]<0) {
                if (asteroids[i] < abs(asteroids[i+1])) {
                    asteroids.erase(asteroids.begin()+i);
                    if (i>0) i--;
                }
                else if (asteroids[i] > abs(asteroids[i+1])) {
                    asteroids.erase(asteroids.begin()+i+1);
                    if (i>0) i--;
                }
                else {
                    asteroids.erase(asteroids.begin()+i+1);
                    asteroids.erase(asteroids.begin()+i);
                    if (i > 0) i--;
                }
            } else i++;
        }
        return asteroids;
    }
};
