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
	var l, h float64
	var n int
	fmt.Scan(&l, &h, &n)
	var a [100]float64

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
		if a[i] > h {
			fmt.Println("-1")
		} else if a[i] >= l && a[i] <= h {
			fmt.Println("0")
		} else {
			fmt.Println(l - a[i])
		}
	}

}
