package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	if a == b {
		fmt.Println(0)
		return
	}

	if b > a {

	} else {
		a, b = b, a

	}
	x := (b - a)
	y := (9 - b) + a + 1
	if x < y {
		fmt.Println(x)
	} else {
		fmt.Println(y)
	}
}
