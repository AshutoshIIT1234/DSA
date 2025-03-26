// Problem Statement: Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            vector<int>ans;
            for(int value:nums){
                int value1=value*value;
                ans.push_back(value1);
            }
            sort(ans.begin(),ans.end());
            return ans;
        }
    };