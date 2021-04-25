package main

import (
	"fmt"
	"math"
)

func main() {
	var x, y float64
	fmt.Scan(&x, &y)

	if math.Abs(x-y) < 3 {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}
