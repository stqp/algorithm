import "fmt"

/*
 * @lc app=leetcode id=44 lang=golang
 *
 * [44] Wildcard Matching
 */

// @lc code=start

var dp map[string]map[string]bool

func isMatch(s string, p string) bool {
	dp = make(map[string]map[string]bool)
	return parse(s, p)
}

func parse(t string, p string) bool {
	if len(t) == 0 && len(p) == 0 {
		return true
	}
	if len(t) > 0 && len(p) == 0 {
		return false
	}
	if v, ok := dp[t][p]; ok {
		return v
	}
	fmt.Println(t, p)
	ch := p[0]
	ans := false
	if 'a' <= ch && ch <= 'z' {
		if len(t) > 0 && t[0] == ch {
			ans = parse(t[1:], p[1:])
		}
	} else if ch == '?' {
		if len(t) > 0 {
			ans = parse(t[1:], p[1:])
		}
	} else if ch == '*' {
		for i := -1; i < len(t); i++ {
			if i == -1 && parse(t, p[1:]) {
				ans = true
			} else if parse(t[i+1:], p[1:]) {
				ans = true
			}
		}
	}
	if _, ok := dp[t]; !ok {
		dp[t] = make(map[string]bool)
	}
	fmt.Println(dp, t, p, ans)
	dp[t][p] = ans
	return ans
}

// @lc code=end
