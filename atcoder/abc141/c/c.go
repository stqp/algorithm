package main

import "fmt"

var (
	N int
	K int
	Q int
	A [1000*100 + 10]int
)

func contains(ss []rune, x rune) bool {
	for _, v := range ss {
		if v == x {
			return true
		}
	}
	return false
}

func main() {
	fmt.Scan(&N, &K, &Q)

	var a int
	for i := 1; i <= Q; i++ {
		fmt.Scan(&a)
		A[a]++
	}

	for i := 1; i <= N; i++ {
		if (K + A[i] - Q) > 0 {
			fmt.Println("Yes")
		} else {
			fmt.Println("No")
		}
	}
}
