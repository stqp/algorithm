package main

import (
	"fmt"
)

func main() {
	var m, h int
	fmt.Scan(&m, &h)

	if h%m == 0 {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}
