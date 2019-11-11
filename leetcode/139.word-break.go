package main

/*
 * @lc app=leetcode id=139 lang=golang
 *
 * [139] Word Break
 */

// @lc code=start

var dp map[string]bool

// 1 is not found
// 2 is found
// 0 is not checked yet.

func wordBreak(s string, wordDict []string) bool {
	dp = make(map[string]bool)
	dfs(s, wordDict)
	return dp[""]
}

func dfs(s string, wordDict []string) {

	if _, ok := dp[s]; ok {
		return
	}

	if len(s) == 0 {
		dp[s] = true
		return
	}

	for _, w := range wordDict {
		if len(s) >= len(w) && s[0:len(w)] == w {
			dfs(s[len(w):], wordDict)
		}
	}
	dp[s] = false

}

// @lc code=end
