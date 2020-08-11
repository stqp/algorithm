package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)

	if s[0] == 'a' ||
		s[0] == 'i' ||
		s[0] == 'u' ||
		s[0] == 'e' ||
		s[0] == 'o' {
		fmt.Println("vowel")
	} else {
		fmt.Println("consonant")
	}
}
