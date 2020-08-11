package main

import (
	"fmt"
)

var (
	n            int
	t            [1000*1000*1000 + 100]bool
	a            int64
	alreadyFound bool
	ans          int
)

func main() {
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a)

		alreadyFound = false
		for {
			if t[a] {
				alreadyFound = true
			}
			t[a] = true
			if a%2 == 1 {
				break
			}
			a /= 2
		}

		if !alreadyFound {
			ans++
		}
	}
	fmt.Println(ans)
}
