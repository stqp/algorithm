package main

import "fmt"

var (
	n   int
	sum = 2025
)

func main() {
	fmt.Scan(&n)
	diff := 2025 - n
	for i := 1; i <= 9; i++ {
		for j := 1; j <= 9; j++ {
			if diff == (i * j) {
				fmt.Printf("%d x %d\n", i, j)
			}
		}
	}
}
