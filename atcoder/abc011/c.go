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
	dp [310][110]bool
)

func solve(total int, count int) bool {
	if count < 0 {
		return false
	}
	if total == 0 {
		return true
	}

	if total == ng1 || total == ng2 || total == ng3 {
		return false
	}
	count--
	return solve(total-1, count) || solve(total-2, count) || solve(total-3, count)
}

func initialize() {
	dp[0][0] = true
	dp[0][1] = true

	dp[0][1] = true
	dp[1][1] = true
	dp[2][1] = true
	dp[3][1] = true

	dp[0][2] = true
	dp[1][2] = dp[0][1]
	dp[2][2] = dp[1][1] || dp[0][1]
	dp[3][2] = dp[2][1] || dp[1][1] || dp[0][1]
	dp[4][2] = dp[3][1] || dp[2][1] || dp[1][1]
	dp[5][2] = dp[4][1] || dp[3][1] || dp[2][1]

	for i := 0; i < 310; i++ {
		for j := 2; j < 110; j++ {
			if i == 0 {
				dp[i][j] = true
			} else if i == 1 {
				dp[i][j] = dp[i-1][j-1]
			} else if i == 2 {
				dp[i][j] = dp[i-1][j-1] || dp[i-2][j-1]
			} else {
				dp[i][j] = dp[i-1][j-1] || dp[i-2][j-1] || dp[i-3][j-1]
			}
			if i == ng1 || i == ng2 || i == ng3 {
				dp[i][j] = false
			}
		}
	}

}

func p(f bool) {
	if f {
		fmt.Print(1)
	} else {
		fmt.Print(0)
	}

}
func main() {
	fmt.Scan(&n, &ng1, &ng2, &ng3)
	initialize()

	for i := 0; i < 300; i++ {
		for j := 0; j < 100; j++ {
			p(dp[i][j])
			fmt.Print(" ")
		}
		fmt.Print("\n")
	}

	res := false
	for i := 0; i < 100; i++ {
		if dp[n][i] {
			res = true
			break
		}
	}
	if res {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}

}
