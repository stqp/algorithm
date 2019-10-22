package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	for {
		if len(s) == 0 {
			fmt.Println("YES")
			return
		} else if len(s) > 1 && s[len(s)-2:len(s)] == "ch" {
			s = s[0 : len(s)-2]
		} else if s[len(s)-1:len(s)] == "o" {
			s = s[0 : len(s)-1]
		} else if s[len(s)-1:len(s)] == "k" {
			s = s[0 : len(s)-1]
		} else if s[len(s)-1:len(s)] == "u" {
			s = s[0 : len(s)-1]
		} else {
			fmt.Println("NO")
			return
		}
	}
}
