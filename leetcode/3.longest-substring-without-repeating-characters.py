#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        count = 0
        for i in range(0, len(s)-1):
            tmp_count = 0
            for j in range(i+1, len(s)):
                if s[j-1] == s[j]:
                    break
                tmp_count = tmp_count + 1
            if tmp_count > count:
                count = tmp_count
        return count
# @lc code=end

