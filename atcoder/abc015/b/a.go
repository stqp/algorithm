package main

import "fmt"

func main() {
	var a, b, sum int

	denominator := 0

	fmt.Scan(&a)

	for i := 0; i < a; i++ {
		fmt.Scan(&b)
		if b > 0 {
			denominator++
		}
		sum += b
	}

	if sum%denominator > 0 {
		fmt.Println(int(sum/denominator) + 1)
	} else {
		fmt.Println(int(sum / denominator))
	}

}
