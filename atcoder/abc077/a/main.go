package main

import (
	"fmt"
)

const (
	N = 10
	M = 10
)

func main() {

	var a, b string
	fmt.Scan(&a)
	fmt.Scan(&b)

	var table [N][M]byte
	var n = 3
	var m = 2

	for i := 0; i < len(a); i++ {
		table[0][i] = a[i]
	}
	for i := 0; i < len(b); i++ {
		table[1][i] = b[i]
	}

	for i := 0; i < m; i++ {
		for j := 0; j < n; j++ {
			if table[i][j] != table[m-1-i][n-1-j] {
				fmt.Println("NO")
				return
			}
		}
	}
	fmt.Println("YES")

}
