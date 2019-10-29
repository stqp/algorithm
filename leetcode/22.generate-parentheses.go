package main

/*
 * @lc app=leetcode id=22 lang=golang
 *
 * [22] Generate Parentheses
 */

// @lc code=start
var a map[string]bool

func generateParenthesis(n int) []string {
	a = make(map[string]bool)
	gen("", n*2, n, 0)
	res := []string{}
	for k, _ := range a {
		res = append(res, k)
	}
	return res
}

func gen(s string, n int, lparCap int, lpar int) {
	if n == 0 {
		if !a[s] {
			a[s] = true
		}
		return
	}
	if lparCap > 0 {
		gen(s+"(", n-1, lparCap-1, lpar+1)
	}
	if lpar > 0 {
		gen(s+")", n-1, lparCap, lpar-1)
	}

}

// @lc code=end
