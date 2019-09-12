package main

import "fmt"

var (
	// N is n.
	N int
	// K is k.
	K   int
	ans [5 * 5 * 5 * 5 * 5 * 2]int
	tmp [10]int
)

func init() {
	for i := 0; i < len(ans); i++ {
		ans[i] = -1
	}
	for i := 0; i < len(tmp); i++ {
		tmp[i] = -1
	}
}

func main() {
	fmt.Scan(&N, &K)

	for i := 0; i < K; i++ {
		fmt.Scan(&ans[i])
	}
	rightMost := K

	for n := 1; n < N; n++ {
		for j := 0; j < K; j++ {
			fmt.Scan(&tmp[j])
		}
		for i := rightMost - 1; i > -1; i-- {
			for j := 0; j < K; j++ {
				ans[i*K+j] = ans[i] ^ tmp[j]
			}
		}
		rightMost *= K
	}

	for i := 0; i < len(ans); i++ {
		if ans[i] == 0 {
			fmt.Println("Found")
			return
		}
	}
	fmt.Println("Nothing")

}
