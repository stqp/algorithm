package main

import "fmt"

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var n int64
	var a [200]int64
	var sum int64
	var avg int64

	var ans int64

	fmt.Scan(&n)

	for i := int64(0); i < n; i++ {
		fmt.Scan(&a[i])
		sum += a[i]
	}

	if sum%n != 0 {
		fmt.Println("-1")
		return
	}

	avg = sum / n
	var tmp_sum int64

	for i := int64(0); i < n; i++ {
		tmp_sum = tmp_sum + (a[i] - avg)
		if tmp_sum == 0 {
			continue
		}
		ans++
	}

	fmt.Println(ans)
}
