package main

import (
	"fmt"
)

func abs(a int) int {
	if a < 0 {
		return (-1) * a
	}
	return a
}

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	if abs(a-c) <= d || abs(a-b) <= d && abs(b-c) <= d {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
