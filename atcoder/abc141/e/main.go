package main

<<<<<<< HEAD
import (
	"fmt"
)

var (
	N int
	S string
)

func main() {
	fmt.Scan(&N, &S)

=======
import "fmt"

var (
	N = 5 * 10
)

func zalgorithm(s string, n int) int {
	var l, r int
	z := make([]int, N)

	for i := 1; i < n; i++ {
		if i > r {
			l = i
			r = i
			for r < n && s[r-l] == s[r] {
				r++
			}
			z[i] = r - l
			r--
		} else {
			k := i - l
			if z[k] < (r - i + 1) {
				z[i] = z[k]
			} else {
				l = i
				for r < n && s[r-l] == s[r] {
					r++
				}
				z[i] = r - l
				r--
			}
		}
	}

	max := -1
	for i := 0; i < n; i++ {
		if z[i] > max {
			max = z[i]
		}
	}
	return max
}

func main() {
	var n int
	var s string
	fmt.Scan(&n, &s)

	max := -1
	for i := 0; i < n; i++ {
		z := zalgorithm(s[i:], n-i)
		if z > max {
			max = z
		}
	}
	fmt.Println(max)
>>>>>>> 918a69d522530c5753f6b6a99e90665e1ce57c35
}
