package main

import (
	"fmt"
)

func main() {
	var v string
	fmt.Scan(&v)

	var a byte

	if v[0] == 'A' {
		a = 'T'
	} else if v[0] == 'T' {
		a = 'A'
	} else if v[0] == 'C' {
		a = 'G'
	} else if v[0] == 'G' {
		a = 'C'
	}
	fmt.Println(string(a))
}
