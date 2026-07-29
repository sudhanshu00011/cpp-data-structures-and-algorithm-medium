class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        bool changed=true;
        while (changed) {
            changed=false;
            for (int i = 0; i+1<asteroids.size(); i++) {
                if (asteroids[i]>0 && asteroids[i+1]<0) {
                    int left=asteroids[i];
                    int right=abs(asteroids[i+1]);
                    if (left>right) asteroids.erase(asteroids.begin()+i+1);
                    else if (left < right) asteroids.erase(asteroids.begin() + i);
                    else {
                        asteroids.erase(asteroids.begin() + i + 1);
                        asteroids.erase(asteroids.begin() + i);
                    }
                    changed = true;
                    break;
                }
            }
        }
        return asteroids;
    }
};
