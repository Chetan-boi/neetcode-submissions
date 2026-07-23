class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = static_cast<int>(nums.size());
        for (int i{0};i<len;i++) {
            for (int j{1};j<len;j++) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) {
                    vector<int> result{i,j};
                    return result;
                }
            }

        } 
        return vector<int> {};
    }
};