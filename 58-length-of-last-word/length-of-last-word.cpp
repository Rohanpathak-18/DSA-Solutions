class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int length = 0;
        int i = n - 1;

// skip spaces
      while(i >= 0 && s[i] == ' ') {
         i--;
      }

// count last word
     while(i >= 0 && s[i] != ' ') {
       length++;
       i--;
      }
    return length;
    }
};