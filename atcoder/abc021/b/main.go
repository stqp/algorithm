package main

import (
	"fmt"
)

func main() {
	var n int
	var a, b int
	var k int
	var p [1000]int

	var d [1000]int

	fmt.Scan(&n, &a, &b, &k)
	for i := 0; i < k; i++ {
		fmt.Scan(&p[i])
		d[p[i]]++
	}

	d[a]++
	d[b]++
	for _, v := range d {
		if v > 1 {
			fmt.Println("NO")
			return
		}
	}
	fmt.Println("YES")
}
