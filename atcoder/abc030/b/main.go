package main

import (
	"fmt"
	"math"
)

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var a, b float64

	var n, m float64

	fmt.Scan(&n, &m)

	a = float64(360) * (n/12 + m/60/12)
	b = float64(360) * (m / 60)

	for a > float64(360) {
		a -= float64(360)
	}
	for b > float64(360) {
		b -= float64(360)
	}
	fmt.Println(math.Min(math.Abs(a-b), 360-math.Abs(a-b)))
}
