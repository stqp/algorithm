package main

import (
	"fmt"
)

var (
	a int
	b int
)

func main() {
	fmt.Scan(&a, &b)
	if a < b {
		fmt.Println((a + 1) * b)
	} else {
		fmt.Println(a * (b + 1))
	}
}
