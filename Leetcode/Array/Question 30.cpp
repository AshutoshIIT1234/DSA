// Leetcode/Array/Question 30.cpp
// 26. Remove Duplicates from Sorted Array
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if (nums.empty())
                return 0;
    
            int k = 1; // The first element is always unique
    
            // Iterate through the array and place unique elements at the front
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) { // If the current element is different
                    nums[k] = nums[i]; // Place it in the next position for unique
                                       // elements
                    k++;
                }
            }
    
            return k;
        }
    };