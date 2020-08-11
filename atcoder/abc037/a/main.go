package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	ans := 0
	if a < b {
		ans = c / a
	} else {
		ans = c / b
	}
	fmt.Println(ans)
}
