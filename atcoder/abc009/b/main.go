package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	max := -1
	secondMax := -1

	var tmp int
	for i := 0; i < n; i++ {
		fmt.Scan(&tmp)
		if max < tmp {
			if max != -1 {
				max, secondMax = tmp, max
			} else {
				max = tmp
			}
		} else if secondMax < tmp && tmp < max {
			secondMax = tmp
		}
	}
	fmt.Println(secondMax)
}
