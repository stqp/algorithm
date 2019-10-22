package main

import "fmt"

func main() {
	var ss string
	fmt.Scan(&ss)

	s := []byte(ss)

	var n int
	fmt.Scan(&n)

	var l, r int

	for i := 0; i < n; i++ {
		fmt.Scan(&l, &r)
		l--
		for j := 0; j < (r-l)/2; j++ {
			s[j+l], s[r-j-1] = s[r-j-1], s[j+l]
		}
	}
	fmt.Println(string(s))

}
