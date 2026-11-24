
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> freq(26, 0);
        vector<int> window(26, 0);

        // Store frequency of characters in p
        for (char ch : p) {
            freq[ch - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < n; right++) {

            // Add current character
            window[s[right] - 'a']++;

            // Maintain fixed window size
            if (right - left + 1 > m) {
                window[s[left] - 'a']--;
                left++;
            }

            // Check if window is an anagram
            if (right - left + 1 == m &&
                window == freq) {

                ans.push_back(left);
            }
        }

        return ans;
    }
};
