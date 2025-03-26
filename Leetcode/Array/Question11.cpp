//sorted array
//Merge two sorted arrays into one sorted array
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m - 1;     // Index for last element of nums1
            int k = m + n - 1; // Index for merge position in nums1
            for(int j = n - 1;j >= 0;k--){
                 if (i >= 0 && nums1[i] > nums2[j]){
                     nums1[k] = nums1[i];
                     i--;
                  } else {
                    nums1[k] = nums2[j];
                    j--;
                }
    
            }
        }
    };