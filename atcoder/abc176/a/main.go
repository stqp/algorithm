package main

import (
	"fmt"
)

func main() {
	var n, x, t int
	fmt.Scan(&n, &x, &t)
	if n%x == 0 {
		fmt.Println(t * (n / x))
	} else {
		fmt.Println(t * ((n / x) + 1))
	}

}
