package main

import (
	"fmt"
)

func max(a, b int64) int64 {
	if a > b {
		return a
	}
	return b
}
func min(a, b int64) int64 {
	if a < b {
		return a
	}
	return b
}
func main() {
	var n int64
	fmt.Scan(&n)

	if n%2 == 0 {
		fmt.Println(n)
	} else {
		fmt.Println(2 * n)
	}
}
