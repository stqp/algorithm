package main

import (
	"fmt"
)

var (
	n int
)

func main() {
	fmt.Scan(&n)
	s := ""
	if n == 100 {
		s = "Perfect"
	} else if n >= 90 {
		s = "Great"
	} else if n >= 60 {
		s = "Good"
	} else {
		s = "Bad"
	}
	fmt.Println(s)

}
