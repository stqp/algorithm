package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	var r [1000]int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&r[i])
	}

	r2 := r[:n]
	sort.Ints(r2)

	var sum float64
	sum = 0
	for i := n - 1; i >= 0; i = i - 2 {
		if i == 0 {
			sum += float64(r2[i] * r2[i])
		} else {
			sum += float64(r2[i]*r2[i] - r2[i-1]*r2[i-1])
		}

	}
	fmt.Println(sum * 3.1415926535)
}
