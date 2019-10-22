package main

import "fmt"

func main() {
	var n, k int
	var a []int

	fmt.Scan(&n, &k)
	var tmp int
	for i := 0; i < n; i++ {
		fmt.Scan(&tmp)
		a = append(a, tmp)
	}

	ans := 0
	for _, v := range a {
		if v >= k {
			ans++
		}
	}

	fmt.Println(ans)
}
