package main

import (
	"fmt"
)

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func main() {
	var a [3]int
	fmt.Scan(&a[0], &a[1], &a[2])
	ans := -1

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			if j == i {
				continue
			}
			for k := 0; k < 3; k++ {
				if k == i || k == j {
					continue
				}
				ans = max(ans, a[i]*10+a[j]+a[k])
			}
		}
	}
	fmt.Println(ans)

}
