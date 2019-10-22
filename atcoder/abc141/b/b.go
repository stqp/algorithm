package main

import "fmt"

var (
	S string
)

func contains(ss []rune, x rune) bool {
	for _, v := range ss {
		if v == x {
			return true
		}
	}
	return false
}
func main() {
	fmt.Scan(&S)

	odd := []rune{
		'R', 'U', 'D',
	}
	even := []rune{
		'L', 'U', 'D',
	}
	ok := true
	for i, v := range S {
		i++
		if i%2 == 0 && contains(even, v) {
		} else if i%2 == 1 && contains(odd, v) {
		} else {
			ok = false
		}
	}
	if ok {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
