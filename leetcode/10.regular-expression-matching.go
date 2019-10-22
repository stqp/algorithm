package main

/*
 * @lc app=leetcode id=10 lang=golang
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
func isMatch(s string, p string) bool {

	return parse(s, p)
}

func parse(t string, p string) bool {
	if len(t) == 0 && len(p) == 0 {
		return true
	}
	if len(t) > 0 && len(p) == 0 {
		return false
	}

	ch := p[0]
	if 'a' <= ch && ch <= 'z' {
		if len(p) >= 2 && p[1] == '*' {

			for i := -1; i < len(t); i++ {

				if i == -1 {
					if parse(t, p[2:]) {
						return true
					}

				} else if ch == t[i] {
					if parse(t[i+1:], p[2:]) {
						return true
					}
				} else {
					return false
				}
			}
		} else {
			if len(t) > 0 && t[0] == p[0] {
				return parse(t[1:], p[1:])
			} else {
				return false
			}
		}
	} else if ch == '.' {
		if len(p) >= 2 && p[1] == '*' {
			for i := -1; i < len(t); i++ {
				if i == -1 {
					if parse(t, p[2:]) {
						return true
					}
				} else {
					if parse(t[i+1:], p[2:]) {
						return true
					}
				}
			}
			return false
		} else {
			if len(t) > 0 {
				return parse(t[1:], p[1:])
			} else {
				return false
			}

		}
	}
	return false
}

// @lc code=end
