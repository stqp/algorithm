package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)
	ans := 0

	for n >= 15 {
		n -= 15
		ans += 800*15 - 200
	}
	ans += 800 * n
	fmt.Println(ans)
}
