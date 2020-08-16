package main

import (
	"fmt"
)

const (
	N = 1000 * 1000
)

func main() {
	var n int
	var t int64
	var a [N]int64

	fmt.Scan(&n, &t)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	var ans int64
	ans = 0

	for i := 0; i < n-1; i++ {
		delta := t - (a[i+1] - a[i])
		if delta > 0 {
			ans += delta
		}
	}
	fmt.Println(int64(n)*t - ans)
}
