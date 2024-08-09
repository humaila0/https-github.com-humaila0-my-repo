class Solution {
public:
    int jump(vector<int>& nums) {
        
           int n = nums.size();
    int jumps = 0;
    int current_end = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; ++i) {
        farthest = std::max(farthest, i + nums[i]);
        
        if (i == current_end) {
            ++jumps;
            current_end = farthest;
        }
    }

    return jumps;
    }
};