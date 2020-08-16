package main

import (
	"fmt"
	"strconv"
)

func main() {
	var a, b string
	fmt.Scan(&a, &b)

	c := a + b

	d, _ := strconv.Atoi(c)

	fmt.Println(2 * d)
}
