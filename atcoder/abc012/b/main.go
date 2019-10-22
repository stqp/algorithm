package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	h := n / 3600
	n = n % 3600
	m := n / 60
	n = n % 60
	s := n
	fmt.Printf("%02d:%02d:%02d\n", h, m, s)
}
