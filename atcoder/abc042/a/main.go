package main

import (
	"fmt"
	"sort"
)

func main() {
	var b [3]int
	fmt.Scan(&b[0], &b[1], &b[2])
	a := b[:]
	sort.Ints(a)

	for k, v := range []int{5, 5, 7} {
		if a[k] != v {
			fmt.Println("NO")
			return
		}
	}
	fmt.Println("YES")
}
