// Leetcode/Array/Question%205.cpp
//only one peak element in the array
        int peakIndexInMountainArray(vector<int>& arr) {
            int peakValueIndex;
            int n = arr.size() - 1;
            int s = 0;
    
            int mid = s + (n - s) / 2;
            while (s < n) {
                if (arr[mid] < arr[mid + 1]) {
                    s = mid + 1;
                } else
    
                {
                    n = mid;
                }
                mid = s + (n - s) / 2;
            }
            return s;
        }