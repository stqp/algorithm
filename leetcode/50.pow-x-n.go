import "fmt"

/*
 * @lc app=leetcode id=50 lang=golang
 *
 * [50] Pow(x, n)
 */

// @lc code=start
func myPow(x float64, n int) float64 {
	var ans float64
	ans = 1

	if absFloat64(x) == 1 {
		if n%2 == 0 {
			return ans
		}
		return ans * x
	}
	if absInt(n) == 0 {
		return ans
	}
	for i := 0; i < absInt(n); i++ {
		ans *= x
	}
	fmt.Println(ans, x, n)
	if n < 0 {
		return 1 / ans
	}

	return ans
}

func absInt(x int) int {
	if x > 0 {
		return x
	} else {
		return -x
	}
}

func absFloat64(x float64) float64 {
	if x > 0 {
		return x
	} else {
		return -x
	}
}

// @lc code=end

