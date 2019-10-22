package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)
	a := make([]int, 10000*50+10)
	ans := make([]int, 10000*50+10)

	for i := 1; i <= n; i++ {
		fmt.Scan(&a[i])
	}
	for i := 1; i <= n; i++ {
		ans[a[i]] = i
	}

	//fmt.Println(ans)
	if n == 1 {
		fmt.Println(ans[1])
	} else {
		fmt.Print(ans[1])
		for i := 2; i <= n; i++ {
			fmt.Print(" " + strconv.Itoa(ans[i]))
		}
		fmt.Println()
	}
}
