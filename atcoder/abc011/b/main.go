package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scan(&s)
	if len(s) == 1 {
		fmt.Println(strings.ToUpper(s))
		return
	}
	s = strings.ToLower(s)
	s = strings.ToUpper(string(s[0])) + s[1:]
	fmt.Println(s)
}
