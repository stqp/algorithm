package main

import (
	"fmt"
)

func main() {
	var k, a, b int
	fmt.Scan(&k, &a, &b)

	for i := 0; i*k <= 1000; i++ {
		if a <= i*k && i*k <= b {
			fmt.Println("OK")
			return
		}
	}
	fmt.Println("NG")
}
