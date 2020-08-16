package main

import (
	"fmt"
	"strconv"
)

func dir(s string) int {
	if s == "East" {
		return 1
	} else {
		return -1
	}
}
func main() {
	var n, a, b int
	fmt.Scan(&n, &a, &b)

	ans := 0

	var s string
	var d int
	for i := 0; i < n; i++ {
		fmt.Scan(&s, &d)
		if d < a {
			ans += dir(s) * a
		} else if a <= d && d <= b {
			ans += dir(s) * d
		} else {
			ans += dir(s) * b
		}
	}
	if ans == 0 {
		fmt.Println(ans)
	} else if ans > 0 {
		fmt.Println("East" + " " + strconv.Itoa(ans))
	} else {
		fmt.Println("West" + " " + strconv.Itoa((-1)*ans))
	}

}
