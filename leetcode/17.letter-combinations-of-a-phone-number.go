package main

/*
 * @lc app=leetcode id=17 lang=golang
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start

var a []string

func letterCombinations(digits string) []string {
	a = make([]string, 0)
	genConbination("", digits)
	return a
}

func genConbination(s string, digits string) {
	if len(digits) == 0 {
		if len(s) > 0 {
			a = append(a, s)
		}
		return
	}

	for _, l := range toLetter(digits[0]) {
		genConbination(s+string(l), digits[1:])
	}
}

func toLetter(num byte) []byte {
	var b, dx byte
	b = 'a'
	dx = (num - '2') * 3
	if num == '7' {
		return []byte{b + dx, b + dx + 1, b + dx + 2, b + dx + 3}
	} else if num == '8' {
		dx++
		return []byte{b + dx, b + dx + 1, b + dx + 2}
	} else if num == '9' {
		dx++
		return []byte{b + dx, b + dx + 1, b + dx + 2, b + dx + 3}
	} else {
		return []byte{b + dx, b + dx + 1, b + dx + 2}
	}
}

// @lc code=end
