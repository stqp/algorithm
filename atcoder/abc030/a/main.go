package main

import (
	"fmt"
)

var (
	a, b, c, d int
)

func main() {
	fmt.Scan(&a, &b, &c, &d)
	if b*c > a*d {
		fmt.Println("TAKAHASHI")
	} else if b*c < a*d {
		fmt.Println("AOKI")
	} else {
		fmt.Println("DRAW")
	}
}
