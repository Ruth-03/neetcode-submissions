class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        long long product = 1;
        int count = 0;

        // Calculate product of non-zero elements and count zeros
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                product *= nums[i];
            } else {
                count++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (count > 1) {
                result.push_back(0);
            }
            else if (count == 1) {
                if (nums[i] == 0)
                    result.push_back(product);
                else
                    result.push_back(0);
            }
            else { // count == 0
                result.push_back(product / nums[i]);
            }
        }

        return result;
    }
};
