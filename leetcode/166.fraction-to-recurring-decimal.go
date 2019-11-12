package main

/*
 * @lc app=leetcode id=166 lang=golang
 *
 * [166] Fraction to Recurring Decimal
 */

// @lc code=start
func fractionToDecimal(numerator int, denominator int) string {
	n := numerator
	d := denominator

}

// func fractionToDecimal(numerator int, denominator int) string {
// 	n := numerator
// 	d := denominator

// 	if n%d == 0 {
// 		return strconv.Itoa(n / d)
// 	}

// 	a := float64(n)
// 	b := float64(d)

// 	c := fmt.Sprintf("%.10f", a/b)

// 	cLen := len(c)
// 	for i := cLen - 1; i >= 0; i-- {
// 		if c[i] == '0' {
// 			c = c[0:i]
// 		} else {
// 			break
// 		}
// 	}

// 	var l []byte
// 	s := 0
// 	for i := 0; i < len(c); i++ {
// 		if c[i] == '.' {
// 			s = i
// 			break
// 		}
// 		l = append(l, c[i])
// 	}

// 	var r []byte
// 	seen := make(map[byte]bool)
// 	repeat := false
// 	for i := s + 1; i < len(c); i++ {
// 		if _, ok := seen[c[i]]; ok {

// 			var t int
// 			for j, v := range r {
// 				if v == c[i] {
// 					t = j
// 				}
// 			}
// 			var ans_r []byte
// 			for j := t; j < len(r); j++ {
// 				ans_r = append(ans_r, r[i])
// 			}
// 			r = append([]byte{'('}, r...)

// 			repeat = true
// 			break
// 		}
// 		r = append(r, c[i])
// 		seen[c[i]] = true
// 	}

// 	if repeat {
// 		return string(l) + ".(" + string(r) + ")"
// 	}

// 	return string(l) + "." + string(r)
// }

// @lc code=end
