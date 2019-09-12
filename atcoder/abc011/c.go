package main

import (
	"fmt"
)

var (
	n   int
	ng1 int
	ng2 int
	ng3 int
)

var (
	t [310]int
	s []int
)

func contains(a []int, b int) bool {
	for _, v := range a {
		if v == b {
			return true
		}
	}
	return false
}

func solve() {

	for len(s) > 0 {
		items := s
		s = nil
		for _, i := range items {
			for _, j := range []int{1, 2, 3} {
				if t[i+j] == -1 || (i+j) > n {
					continue
				}
				if t[i+j] == 0 || (t[i]+1) < t[i+j] {
					t[i+j] = t[i] + 1
					s = append(s, i+j)
				}
			}
		}
	}
}

func main() {
	fmt.Scan(&n, &ng1, &ng2, &ng3)

	t[ng1] = -1
	t[ng2] = -1
	t[ng3] = -1

	s = append(s, 0)
	solve()

	if t[n] > 0 && t[n] <= 100 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}

}
