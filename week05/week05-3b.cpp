// week05-3b.cpp 學習計畫 Built-in Functions 第1週
// LeetCode 58. Length of Last Word 最後單詞，有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // week05 string 字串串流 (cin也是stream)
        // week04 C++ 的問題，就是要走去標頭檔 初始化的字串
        string ans; // Week02 C++ 字串的宣告
        while (ss >> ans) { // week05-1.cpp 有用到 很像 cin 的 iostream
            // 什麼都不做
        }
        return ans.length(); // Week01 Week02 字串的長度
    }
};
