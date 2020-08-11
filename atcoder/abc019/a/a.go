package main

import (
	"fmt"
	"sort"
)

func main() {
	s := []int{-1, -1, -1}

	fmt.Scan(&s[0])
	fmt.Scan(&s[1])
	fmt.Scan(&s[2])

	sort.Ints(s)
	fmt.Println(s[1])
}
