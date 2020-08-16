package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scan(&s)

	ans := 0
	for _, v := range s {
		if v == '+' {
			ans++
		} else if v == '-' {
			ans--
		}
	}
	fmt.Println(ans)
}
