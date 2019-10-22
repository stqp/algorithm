package main

import "fmt"

func isValid(s *[]rune, t *[]rune, a, b, max int) bool {
	(*s)[a], (*s)[b] = (*s)[b], (*s)[a]
	c := 0
	for i := range *s {
		if (*s)[i] != (*t)[i] {
			c++
		}
	}
	(*s)[a], (*s)[b] = (*s)[b], (*s)[a]
	return c <= max
}

func main() {
	var n, k int
	var s string
	fmt.Scan(&n, &k, &s)

	ss := make([]rune, len(s))
	tt := make([]rune, len(s))
	for i, v := range s {
		ss[i] = v
		tt[i] = v
	}

	for i := 0; i < n; i++ {
		min := i
		for j := i + 1; j < n; j++ {
			if ss[min] > ss[j] && isValid(&ss, &tt, j, min, k) {
				min = j
			}
		}
		if min > i {
			ss[i], ss[min] = ss[min], ss[i]
		}
	}
	fmt.Println(string(ss))
}
