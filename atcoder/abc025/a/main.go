package main

import (
	"fmt"
)

var (
	s string
	n int
)

func main() {
	fmt.Scan(&s, &n)
	count := 0
	for i := 0; i < len(s); i++ {
		for j := 0; j < len(s); j++ {
			if count == n-1 {
				fmt.Println(string(s[i]) + string(s[j]))
				return
			}
			count++
		}
	}
}
