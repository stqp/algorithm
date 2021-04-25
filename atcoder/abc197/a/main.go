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
	var x string
	fmt.Scan(&x)

	x = string(x[1]) + string(x[2]) + string(x[0])

	fmt.Println(x)

}
