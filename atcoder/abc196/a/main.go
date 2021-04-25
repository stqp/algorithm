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
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	max := -10000
	for i := a; i <= b; i++ {
		for j := c; j <= d; j++ {
			if max < (i - j) {
				max = (i - j)
			}
		}
	}
	fmt.Println(max)

}
