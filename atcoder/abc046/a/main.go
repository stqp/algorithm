package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	var m [200]int

	m[a] = 1
	m[b] = 1
	m[c] = 1

	ans := 0
	for _, v := range m {
		if v == 1 {
			ans++
		}
	}
	fmt.Println(ans)
}
