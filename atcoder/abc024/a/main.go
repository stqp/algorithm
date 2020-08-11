package main

import (
	"fmt"
)

var (
	a int
	b int
	c int
	k int
	s int
	t int
)

func main() {
	fmt.Scan(&a, &b, &c, &k, &s, &t)
	if (s + t) >= k {
		fmt.Println(s*(a-c) + t*(b-c))
	} else {
		fmt.Println(s*a + t*b)
	}
}
