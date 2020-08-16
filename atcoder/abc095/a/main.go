package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	ans := 700

	for _, v := range s {
		if v == 'o' {
			ans += 100
		}
	}
	fmt.Println(ans)
}
