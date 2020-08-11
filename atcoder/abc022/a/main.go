package main

import (
	"fmt"
)

var (
	N int
	S int
	T int
	W int
)

func main() {
	fmt.Scan(&N, &S, &T)
	var a int
	x := 0
	ans := 0
	for i := 0; i < N; i++ {
		fmt.Scan(&a)
		x += a
		if S <= x && x <= T {
			ans++
		}
	}
	fmt.Println(ans)
}
