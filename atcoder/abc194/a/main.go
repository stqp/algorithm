package main

import (
	"fmt"
)

func main() {
	var a, b, kokei float64
	fmt.Scan(&a, &b)

	kokei = a + b

	if kokei >= 15 && b >= 8 {
		fmt.Println(1)
	} else if kokei >= 10 && b >= 3 {
		fmt.Println(2)
	} else if kokei >= 3 {
		fmt.Println(3)
	} else {
		fmt.Println(4)
	}

}
