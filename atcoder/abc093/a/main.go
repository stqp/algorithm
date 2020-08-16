package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scan(&s)

	var m [1000]bool
	for _, v := range s {
		m[v] = true
	}

	if m['a'] && m['b'] && m['c'] {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}
