#include <bits/stdc++.h>
string replaceSpaces(string& str) {
    string space = {" "};
    string replacestring = {"@40"};
    string newstring = {" "};
    string cleaned = "";

    int j = 0;
    for (int i = 0; i < str.size(); i++) {
     
        if (str[i] == newstring[j]) {
            cleaned += replacestring;
        }
		else{
            cleaned += str[i]; 
        }
    }
    return cleaned;
}
