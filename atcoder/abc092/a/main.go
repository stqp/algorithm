package main

import "fmt"

func main() {
	var a, b, c, d int
	fmt.Scan(&a, &b, &c, &d)

	ans := 0
	if a <= b {
		ans += a
	} else {
		ans += b
	}

	if c <= d {
		ans += c
	} else {
		ans += d
	}
	fmt.Println(ans)
}
