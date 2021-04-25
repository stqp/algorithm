package main

import (
	"fmt"
)

func main() {
	var x int
	fmt.Scan(&x)

	x++
	fmt.Println(x % 2)
}
