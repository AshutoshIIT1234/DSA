/*410. Split Array Largest Sum
Solved
Hard
Topics
Companies
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
Example 2:

Input: nums = [1,2,3,4,5], k = 2
Output: 9
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.
 

Constraints:

1 <= nums.length <= 1000
0 <= nums[i] <= 106
1 <= k <= min(50, nums.length)*/
class Solution {
    public:
        bool isPossible(vector<int>& arr, int k, long long mid) {
            int subarray = 1;
            long long sumofnum = 0;
    
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] > mid) {
                    return false;  // अगर कोई नंबर mid से जादा बा, तो असंभव
                }
                if (sumofnum + arr[i] <= mid) {
                    sumofnum += arr[i];
                } else {
                    subarray++;
                    sumofnum = arr[i];
                    if (subarray > k) {  // k हिस्सा से जादा ना हो
                        return false;
                    }
                }
            }
            return true;
        }
    
        int splitArray(vector<int>& nums, int k) {
            long long s = 0;
            long long sumofnums = 0;
    
            // s = सबसे जादा नंबर, e = पूरा सम
            for (int i = 0; i < nums.size(); i++) {
                sumofnums += nums[i];
                s = max(s, (long long)nums[i]);  // s कम से कम मैक्स नंबर
            }
            long long e = sumofnums;
            long long ans = -1;
    
            while (s <= e) {
                long long mid = s + (e - s) / 2;
                if (isPossible(nums, k, mid)) {
                    ans = mid;
                    e = mid - 1;  // और कम ढूंढो
                } else {
                    s = mid + 1;  // जादा चाही
                }
            }
            return (int)ans;  // LeetCode int मांगत hai, तो कास्ट करीं
        }
    };
