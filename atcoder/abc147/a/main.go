package main

import (
	"fmt"
)

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	ans := a + b + c

	if ans >= 22 {
		fmt.Println("bust")
	} else {
		fmt.Println("win")
	}
}
