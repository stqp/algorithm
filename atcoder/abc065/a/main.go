package main

import "fmt"

func main() {
	var x, a, b int
	fmt.Scan(&x, &a, &b)

	expire := b - a
	if expire > x {
		fmt.Println("dangerous")
	} else if expire > 0 {
		fmt.Println("safe")
	} else {
		fmt.Println("delicious")
	}
}
