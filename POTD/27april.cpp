/*3392. Count Subarrays of Length Three With a Condition 

class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int ans = 0;
            for (int i = 1; i + 1 < nums.size(); ++i) {
                if ((nums[i - 1] + nums[i + 1]) * 2 == nums[i]) {
                    ++ans;
                }
            }
            return ans;
        }
    };

    */