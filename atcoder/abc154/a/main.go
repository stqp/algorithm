package main

import (
	"fmt"
)

func main() {
	var s, t, u string
	var a, b int
	fmt.Scan(&s, &t, &a, &b, &u)

	if s == u {
		a--
		fmt.Println(a, " ", b)
	} else {
		b--
		fmt.Println(a, " ", b)
	}
}
