class Solution {
    public:
        bool isPalindrome(string s) {
            int n = s.size() - 1;
            string cleaned = "";
            for (int i = 0; i < s.size(); i++) {
                if (isalnum(s[i])) {
                    cleaned += s[i];
                }
            }
    
            transform(cleaned.begin(), cleaned.end(), cleaned.begin(), ::tolower);
    
            int S = 0;
            int e = cleaned.length() - 1;
    
            while (S <= e) {
                if (cleaned[S] != cleaned[e]) {
                    return 0;
                } else {
                    S++;
                    e--;
                }
            }
            return 1;
        }
    };
    #include <bits/stdc++.h>
    string replaceSpaces(string& str) {
        string space = {" "};
        string replacestring = {"@40"};
        string newstring = {" "};
        string cleaned = "";
    
        int j = 0;
        for (int i = 0; i < str.size(); i++) {
            if (isalnum(str[i])) {
                cleaned += str[i];
            }
            if (str[i] == newstring[j]) {
                cleaned += replacestring;
            }
        }
        return cleaned;
    }
    int main() {
        string str = "Hello World! How are you?";
        cout << replaceSpaces(str) << endl;
        return 0;
    }    