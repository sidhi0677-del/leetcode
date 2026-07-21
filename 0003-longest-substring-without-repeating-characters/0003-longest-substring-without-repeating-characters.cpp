class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256, -1);
        int left = 0, ans = 0;

        for (int right = 0; right < s.length(); right++) {
            if (index[s[right]] >= left) {
                left = index[s[right]] + 1;
            }

            index[s[right]] = right;
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};