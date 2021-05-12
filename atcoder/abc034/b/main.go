package main

import (
	"fmt"
)

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var n int
	fmt.Scan(&n)

	if n%2 == 0 {
		fmt.Println(n - 1)
	} else {
		fmt.Println(n + 1)
	}

}
