package main

import (
	"fmt"
	"math"
)

var (
	xa int
	ya int
	xb int
	yb int
	t  int
	v  int
	n  int
)

func square(x int) float64 {
	return float64(x * x)
}

func main() {
	fmt.Scan(&xa, &ya, &xb, &yb, &t, &v)
	fmt.Scan(&n)

	xs := make([]int, n)
	ys := make([]int, n)

	yes := false
	for i := 0; i < n; i++ {
		fmt.Scan(&xs[i], &ys[i])
		d1 := math.Sqrt(square(xs[i]-xa) + square(ys[i]-ya))
		d2 := math.Sqrt(square(xs[i]-xb) + square(ys[i]-yb))
		if d1+d2 <= float64(v*t) {
			yes = true
		}
	}
	if yes {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}

}
