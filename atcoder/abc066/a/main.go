package main

import (
	"fmt"
	"sort"
)

func main() {
	var a [3]int
	fmt.Scan(&a[0], &a[1], &a[2])

	b := a[:]

	sort.Ints(b)

	fmt.Println(b[0] + b[1])

}
