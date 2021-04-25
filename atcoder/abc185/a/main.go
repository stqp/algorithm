package main

import (
	"fmt"
)

func main() {
	var a, b, c, d int

	fmt.Scan(&a, &b, &c, &d)

	min := a
	if b < min {
		min = b
	}
	if c < min {
		min = c
	}
	if d < min {
		min = d
	}

	fmt.Println(min)
}
