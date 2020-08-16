package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scan(&s)

	var m [1000]byte

	for _, v := range s {
		m[v]++
	}

	for _, v := range m {
		if v != 0 && v != 2 {
			fmt.Println("No")
			return
		}
	}
	fmt.Println("Yes")
}
