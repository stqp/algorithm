package main

import (
	"fmt"
)

func main() {
	var n, a, b int
	fmt.Scan(&n)

	if n == 1 {
		fmt.Println("Hello World")
		return
	}
	if n == 2 {
		fmt.Scan(&a, &b)
		fmt.Println(a + b)
	}

}
