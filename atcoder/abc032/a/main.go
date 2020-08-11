package main

import "fmt"

var (
	a int
	b int
	n int
)

func main() {
	fmt.Scan(&a, &b, &n)
	ans := 1
	for !(ans%a == 0 && ans%b == 0 && ans >= n) {
		ans++
	}
	fmt.Println(ans)
}
