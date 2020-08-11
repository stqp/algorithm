package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)

	if n < 10 {
		fmt.Println("ABC00" + strconv.Itoa(n))
	} else if n < 100 {
		fmt.Println("ABC0" + strconv.Itoa(n))
	} else {
		fmt.Println("ABC" + strconv.Itoa(n))
	}
}
