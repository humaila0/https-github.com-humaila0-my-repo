class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n = nums.size();
    std::vector<int> result(n, 1); // Initialize result vector with 1s
    int left_product = 1;
    int right_product = 1;

    // Calculate left products and store in result
    for (int i = 0; i < n; ++i) {
        result[i] = left_product;
        left_product *= nums[i];
    }

    // Calculate right products and update result
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right_product;
        right_product *= nums[i];
    }
return result;
    }
};