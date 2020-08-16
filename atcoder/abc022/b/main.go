package main

import "fmt"

const (
	N = 10000000
)

func main() {
	var n int
	var a [N]int

	var m [N]bool

	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	count := 0
	for i := 0; i < n; i++ {
		if m[a[i]] {
			count++
		}
		m[a[i]] = true
	}
	fmt.Println(count)
}
