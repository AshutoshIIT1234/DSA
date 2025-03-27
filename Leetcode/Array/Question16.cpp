/*Problem Statement (LeetCode 186: Reverse Words in a String II):
Task: You’re given a string s as a character array (e.g., ["h","e","l","l","o"," ","w","o","r","l","d"]). Reverse the words in the string, but keep the characters within each word in the same order. Means:
Reverse the order of words (first word becomes last, last becomes first).
Keep the order of characters within each word the same.
Words are separated by spaces (' ').
Special Note:
Modify the string in-place—no extra space allowed (O(1) space required).
s is a char array, and you need to modify s itself, not return anything.
Examples:
Input: s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]
Output: s = ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]
Explanation: String is "the sky is blue". Words: "the", "sky", "is", "blue". After reversing: "blue", "is", "sky", "the". So string becomes "blue is sky the".
Input: s = ["a"]
Output: s = ["a"]
Explanation: Only one word, so it stays the same.
Constraints:
1 <= s.length <= 10^5
s[i] is any printable ASCII character.
No leading or trailing spaces in s.
Exactly one space between words.//