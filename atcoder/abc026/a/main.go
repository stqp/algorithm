package main

import (
	"fmt"
)

var (
	a int
)

func main() {
	fmt.Scan(&a)
	max := -1
	for i := 1; i < a; i++ {
		j := a - i
		if max < i*j {
			max = i * j
		}
	}
	fmt.Println(max)
}
