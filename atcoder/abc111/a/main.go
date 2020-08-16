package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n string
	fmt.Scan(&n)

	var b [3]rune

	for i, v := range n {
		if v == '1' {
			b[i] = '9'
		} else {
			b[i] = '1'
		}
	}

	ans, _ := strconv.Atoi(string(b[:]))
	fmt.Println(ans)

}
