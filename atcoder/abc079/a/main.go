package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)

	s := strconv.Itoa(n)

	if s[1] == s[2] && (s[0] == s[1] || s[3] == s[1]) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
