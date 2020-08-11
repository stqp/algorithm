package main

import (
	"fmt"
)

func main() {
	a := 0
	fmt.Scan(&a)
	if a == 1 {
		fmt.Println("ABC")
	} else if a == 2 {
		fmt.Println("chokudai")
	}
}
