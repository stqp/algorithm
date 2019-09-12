package main

import (
	"fmt"
)

var (
	n int
	m int
	t [100000 + 100]int64
)

func main() {
	fmt.Scan(&n, &m)
	var l, r, s int64
	total := int64(0)
	for i := 1; i <= n; i++ {
		fmt.Scan(&l, &r, &s)
		t[l] += s
		t[r+1] -= s
		total += s
	}

	min := int64(1)
	for i := 0; i < 62; i++ {
		min = min * 2
	}
	sum := int64(0)
	for i := 1; i <= m; i++ {
		sum += t[i]
		if min > sum {
			min = sum
		}
	}
	ans := total - min
	fmt.Println(ans)
}
