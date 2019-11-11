/*
 * @lc app=leetcode id=140 lang=golang
 *
 * [140] Word Break II
 */

// @lc code=start
var words []string
var dp map[string][]string

func wordBreak(s string, wordDict []string) []string {
	words = wordDict
	dp = make(map[string][]string)
	bfs(s)
	return dp[s]
}

func bfs(s string) {

	if _, ok := dp[s]; !ok {

		dp[s] = make([]string, 0)
		for _, w := range words {

			if len(s) >= len(w) && s[0:len(w)] == w {
				if len(s[len(w):]) == 0 {
					dp[s] = append(dp[s], w)
				} else {
					bfs(s[len(w):])
					for _, v := range dp[s[len(w):]] {
						dp[s] = append(dp[s], w+" "+v)
					}
				}
			}
		}
	}
}

// @lc code=end

