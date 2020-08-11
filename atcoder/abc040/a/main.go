package main

import (
	"fmt"
)

func main() {
	var n, x int
	fmt.Scan(&n, &x)
	if n-x < x-1 {
		fmt.Println(n - x)
	} else {
		fmt.Println(x - 1)
	}
}
