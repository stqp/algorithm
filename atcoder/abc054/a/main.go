package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a == b {
		fmt.Println("Draw")
	} else if (b != 1 && a > b) || a == 1 {
		fmt.Println("Alice")
	} else {
		fmt.Println("Bob")
	}
}
