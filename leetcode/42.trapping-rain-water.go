/*
 * @lc app=leetcode id=42 lang=golang
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
var wh []int

func trap(height []int) int {
	wh = make([]int, len(height))

	i := Max(height, 0, len(height))
	conquerLeft(height, 0, i)
	conquerRight(height, i+1, len(height))

	ans := 0
	for i := 0; i < len(height); i++ {
		if wh[i]-height[i] > 0 {
			ans += wh[i] - height[i]
		}
	}
	return ans
}

func conquerLeft(height []int, l int, r int) {
	if r <= l {
		return
	}
	maxi := Max(height, l, r)
	for i := maxi; i < r; i++ {
		wh[i] = height[maxi]
	}
	conquerLeft(height, l, maxi)
}

func conquerRight(height []int, l int, r int) {
	if !(l+1 < r) {
		return
	}
	maxi := Max(height, l, r)
	for i := l; i < maxi; i++ {
		wh[i] = height[maxi]
	}
	conquerRight(height, maxi+1, r)
}

func Max(xs []int, l int, r int) int {
	max := 0
	maxi := l
	for i := l; i < r; i++ {
		if xs[i] > max {
			maxi = i
			max = xs[i]
		}
	}
	return maxi
}

// @lc code=end

