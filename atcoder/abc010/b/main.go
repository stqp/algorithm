package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	var j int
	c := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&j)
		for {
			if j%2 != 0 && (j%3 != 2) {
				break
			}
			j--
			c++
		}
	}
	fmt.Println(c)
}
