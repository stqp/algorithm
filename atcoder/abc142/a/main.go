package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	var c float64
	c = 0
	for i := 1; i <= n; i++ {
		if i%2 == 1 {
			c++
		}
	}
	fmt.Println(c / float64(n))
}
