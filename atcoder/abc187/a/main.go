package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	var sum1, sum2 int

	sum1 = a % 10
	a = a / 10
	sum1 += (a % 10)
	a = a / 10
	sum1 += a

	sum2 = b % 10
	b = b / 10
	sum2 += (b % 10)
	b = b / 10
	sum2 += b

	if sum1 >= sum2 {
		fmt.Println(sum1)
	} else {
		fmt.Println(sum2)
	}

}
