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
	var s string
	var k int
	fmt.Scan(&s, &k)

	m := make(map[string]bool)

	for i := 0; i <= len(s)-k; i++ {
		m[s[i:i+k]] = true
	}

	var ans int
	for range m {
		ans++
	}
	fmt.Println(ans)

}
