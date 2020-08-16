package main

import (
	"fmt"
)

const (
	N = 10
)

func abs(a int) int {
	if a < 0 {
		return -a
	}
	return a
}

func main() {
	var a [N]int
	var k int
	n := 5
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	fmt.Scan(&k)

	for i := 0; i < n; i++ {
		for j := i; j < n; j++ {
			if abs(a[i]-a[j]) > k {
				fmt.Println(":(")
				return
			}
		}
	}
	fmt.Println("Yay!")

}
