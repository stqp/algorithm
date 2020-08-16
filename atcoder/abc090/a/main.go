package main

import "fmt"

func main() {
	var s [3]string

	fmt.Scan(&s[0], &s[1], &s[2])

	ans := string(s[0][0]) + string(s[1][1]) + string(s[2][2])

	fmt.Println(string(ans))

}
