package main

import (
	"fmt"
)

var (
	x int
)

func main() {
	fmt.Scan(&x)
	var u, l int
	u = x / 10
	l = x % 10
	fmt.Println(u + l)
}
