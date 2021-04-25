package main

import (
	"fmt"
)

func main() {
	var x string
	fmt.Scan(&x)

	if x[0] == x[1] && x[1] == x[2] {
		fmt.Println("Won")
	} else {
		fmt.Println("Lost")
	}

}
