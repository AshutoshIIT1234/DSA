class Solution {
    public:
        vector<char> reverseArray(vector<char>& arr) {
            int s = 0;
            int e = arr.size() - 1;
            while (s < e) {
                swap(arr[s++], arr[e--]);
            }
            return arr;
        }
    
        void reverseString(vector<char>& s) {
    
            vector<char> reversearray = reverseArray(s);
        }
    };
    
    