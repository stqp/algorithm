package main

/*
 * @lc app=leetcode id=166 lang=golang
 *
 * [166] Fraction to Recurring Decimal
 */

// @lc code=start
import (
	"fmt"
	"strconv"
	"strings"
)

func fractionToDecimal(numerator int, denominator int) string {

	n := numerator
	d := denominator

	sign := ""
	if n*d < 0 {
		sign = "-"
	}
	if n < 0 {
		n = -1 * n
	}
	if d < 0 {
		d = -1 * d
	}

	//seen := make([]bool, 15)

	ans := strconv.Itoa(n / d)
	if n%d == 0 {
		return sign + ans
	}

	ans += "."
	intMax := 1<<20 - 1
	qs := make([]int, intMax)
	rs := make([]int, intMax)
	var p1, p2, p3, p4 int
	var q, r int
	r = (n % d) * 10
	rs = append(rs, r)

	for i := 0; i < len(qs); i++ {
		q = r / d
		qs[i] = q
		//qs = append(qs, q)

		r = r % d
		if r == 0 {
			return sign + ans + arrayToString(qs[0:i+1])
		}
		rs[i] = r
		r *= 10
	}

	p1 = 1
	p2 = 2
	for p1 < len(qs) {
		if rs[p1] == rs[p2] {
			break
		}
		p1 = p1 + 1
		p2 = p2 + 2
	}

	// 循環の開始位置
	p3 = 0
	for {
		if rs[p1] == rs[p3] && qs[p1] == qs[p3] {
			break
		}
		p1++
		p3++
	}

	// 循環の長さ
	p4 = p3 + 1
	for {
		if rs[p3] == rs[p4] {
			break
		}
		p4++
	}
	fmt.Println(p3, p4, qs, rs)

	for i := 0; i < p3; i++ {
		ans += strconv.Itoa(qs[i])
	}
	ans += "("
	for i := p3; i < p4; i++ {
		ans += strconv.Itoa(qs[i])
	}
	ans += ")"
	//ans += arrayToString(qs[0:p3]) + "(" + arrayToString(qs[p3:p4]) + ")"
	return sign + ans
}

func arrayToString(a []int) string {
	return strings.Trim(strings.Replace(fmt.Sprint(a), " ", "", -1), "[]")
}

// @lc code=end
