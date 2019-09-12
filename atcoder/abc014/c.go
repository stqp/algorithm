package main

import "fmt"

var (
	n          int
	reputation [1000*1000 + 100]int
	ans        int
)

func main() {
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var a, b int
		fmt.Scan(&a, &b)
		reputation[a]++
		reputation[b+1]--
	}

	now := 0
	for i := 0; i < len(reputation); i++ {
		now += reputation[i]
		if now > ans {
			ans = now
		}
	}
	fmt.Println(ans)

}
