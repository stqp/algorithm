package main

import (
	"fmt"
)

func main() {
	n := 0
	fmt.Scan(&n)
	s := []int{8, 4, 2, 1}
	i := 0
	count := 0
	ans := []int{}

	for i < len(s) {
		if s[i] > n {
			i++
			continue
		}
		n -= s[i]
		ans = append(ans, s[i])
		count++
	}
	fmt.Println(count)
	for len(ans) > 0 {
		fmt.Println(ans[0])
		ans = ans[1:]
	}
}
