package main

import (
	"fmt"
)

func whichStep(s string) int {
	if s[0] == 'a' && s[len(s)-1] == 'c' {
		return 1
	}
	if s[0] == 'c' && s[len(s)-1] == 'a' {
		return 2
	}
	if s[0] == 'b' && s[len(s)-1] == 'b' {
		return 0
	}
	return -1
}

func proceed(s string, step int) string {
	if step == 0 {
		return "b"
	}
	if step%3 == 0 {
		return "b" + s + "b"
	}
	if step%3 == 1 {
		return "a" + s + "c"
	}
	if step%3 == 2 {
		return "c" + s + "a"
	}
	return ""
}

func main() {
	var n int
	var s string
	fmt.Scan(&n, &s)

	step := 0
	t := proceed("", step)

	for len(s) >= len(t) {
		if s == t {
			fmt.Println(step)
			return
		} else {
			step++
			t = proceed(t, step)
		}
	}

	fmt.Println(-1)

}
