package main

import (
	"fmt"
)

func main() {
	var x, t int
	fmt.Scan(&x, &t)

	if x-t < 0 {
		fmt.Println(0)
	} else {
		fmt.Println(x - t)
	}
}
