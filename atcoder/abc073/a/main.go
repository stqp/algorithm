package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)

	s := strconv.Itoa(n)

	for _, v := range s {
		if v == '9' {
			fmt.Println("Yes")
			return
		}
	}
	fmt.Println("No")
}
