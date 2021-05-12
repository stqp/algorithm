package main

import (
	"fmt"
)

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var n int
	var ss [1010]string
	var ps [1010]float64
	fmt.Scan(&n)

	var sum float64
	var ans string
	var max float64

	for i := 0; i < n; i++ {
		fmt.Scan(&ss[i], &ps[i])
		if max < ps[i] {
			ans = ss[i]
			max = ps[i]
		}
		sum += ps[i]
	}

	if max > sum/2 {
		fmt.Println(ans)
	} else {
		fmt.Println("atcoder")
	}

}
