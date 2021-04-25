package main

import (
	"fmt"
	"math"
)

func main() {
	var x string
	fmt.Scan(&x)

	var a float64
	var tmp float64

	for i := 0; i < len(x); i++ {
		if x[i] == 'R' {
			tmp++
			a = math.Max(a, tmp)
		} else if x[i] == 'S' {
			tmp = 0
		}
	}
	fmt.Println(a)
}
