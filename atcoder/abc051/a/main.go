package main

import (
	"fmt"
)

func main() {
	var s []byte
	fmt.Scan(&s)

	s[5] = ' '
	s[13] = ' '
	fmt.Println(string(s))
}
