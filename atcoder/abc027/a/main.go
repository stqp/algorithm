package main

import (
	"fmt"
)

var (
	a [3]int
)

func main() {
	fmt.Scan(&a[0], &a[1], &a[2])
	if a[0] == a[1] {
		fmt.Println(a[2])
	} else if a[0] == a[2] {
		fmt.Println(a[1])
	} else {
		fmt.Println(a[0])
	}
}
