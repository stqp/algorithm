package main

import "fmt"

func main() {
	t := make(map[string]int)

	var n int
	fmt.Scan(&n)
	var s string
	for i := 0; i < n; i++ {
		fmt.Scan(&s)
		t[s]++
	}
	max := -1
	ans := ""
	for k, v := range t {
		if max < v {
			ans = k
			max = v
		}
	}
	fmt.Println(ans)
}
