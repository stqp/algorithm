package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	ans := 0
	for _, v := range s {
		if v == '1' {
			ans++
		}
	}
	fmt.Println(ans)
}
