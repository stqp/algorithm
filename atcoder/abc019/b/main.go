package main

import (
	"fmt"
	"strconv"
)

func main() {
	var s string
	fmt.Scan(&s)

	var ans []byte

	ans = append(ans, s[0])
	count := 1

	for i := 1; i < len(s); i++ {

		if s[i] == ans[len(ans)-1] {
			count++
		} else {
			for _, v := range strconv.Itoa(count) {
				ans = append(ans, byte(v))
			}
			ans = append(ans, s[i])
			count = 1
		}
	}
	for _, v := range strconv.Itoa(count) {
		ans = append(ans, byte(v))
	}
	fmt.Println(string(ans))

}
