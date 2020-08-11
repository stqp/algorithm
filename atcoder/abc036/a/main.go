package main

import "fmt"

func main() {
	var a, b int
	fmt.Scan(&a, &b)

	ans := 0
	for ans*a < b {
		ans++
	}
	fmt.Println(ans)
}
