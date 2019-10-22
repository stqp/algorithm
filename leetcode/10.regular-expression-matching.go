import "fmt"

/*
 * @lc app=leetcode id=10 lang=golang
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
func isMatch(s string, p string) bool {
	fmt.Println(s, p)
	if len(p) == 0 && len(s) == 0 {
		return true
	}
	if len(s) == 0 || len(p) == 0 {
		return false
	}

	if len(p) == 1 {
		if len(s) != 1 {
			return false
		} else {
			if p[0] == '.' {
				return true
			} else {
				return s[0] == p[0]
			}
		}
	}

	c1 := p[0]
	c2 := p[1]
	if c2 == '*' {
		xs := excludeAsterisk(s, string(c1)+string(c2))
		fmt.Println("xs", xs)
		res := false
		for _, x := range xs {
			if x < 0 {
				res = res || false
			} else {
				res = res || isMatch(s[x:], p[2:])
			}
		}
		return res
	} else {
		x := excludeMatched(s, string(c1))
		if x < 0 {
			return false
		}
		return isMatch(s[x:], p[1:])
	}

}

// p's length must be 1. p is just a char.
func excludeMatched(s string, p string) int {
	if p[0] == '.' || p[0] == s[0] {
		return 1
	}
	return -1
	// return next index.
}

func excludeAsterisk(s string, p string) []int {
	res := []int{1}
	var pre byte

	if p[0] == '.' {
		pre = s[0]
		for i := 0; i < len(s); i++ {
			res = append(res, i+1)
		}
	} else {
		pre = p[0]
		c := 0
		for i := 0; i < len(s); i++ {
			if s[i] == pre {
				c++
				continue
			}
			break
		}
		res = append(res, c)
	}
	return res
}

// @lc code=end

// for i := 0; i < len(p); i++ {
// 	c1 := p[i]
// 	var c2 char
// 	if i < len(p)-1 { // when unchecked chars is more then two.
// 		c2 = p[i+1]
// 		if c2 == '*' {
// 			i++

// 			var c3 char
// 			for{
// 				c3 = p[i+1]
// 				if c3 == "."{
// 					i++
// 				}
// 			}
// 		}else{
// 			if c1 == '.' { // going to check next char.
// 				s = [:len(s)-1]
// 				// continue
// 			} else { // when c1 is alphabet.
// 				if c1 != s[0]{
// 					return false
// 				}else{
// 					s = s[:len(s)-1]
// 					//continue
// 				}
// 			}
// 		}
// 	}else{ // when checking last one char.
// 		if c1 == "." || c1 == s[0]{
// 			return len(s) == 1
// 		}
// 		return false
// 	}
// }
// return false
