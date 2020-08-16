package main

import (
	"fmt"
)

func main() {
	var n int
	var x int64
	var a [100]int64

	fmt.Scan(&n, &x)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	var ans int64
	ans = 0
	for i := 0; i < n; i++ {
		if x&1 == 1 {
			ans += a[i]
		}
		x = x >> 1
	}
	fmt.Println(ans)
}
