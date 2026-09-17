#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int countDrops = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // (i + 1) % n automatically checks nums[n - 1] > nums[0] when i = n - 1
            if (nums[i] > nums[(i + 1) % n]) {
                countDrops++;
            }
            if (countDrops > 1) {
                return false;
            }
        }

        return true;
    }
};