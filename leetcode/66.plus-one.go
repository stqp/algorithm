/*
 * @lc app=leetcode id=66 lang=golang
 *
 * [66] Plus One
 */

// @lc code=start
func plusOne(digits []int) []int {
	var ans []int
	countUp := 1
	for i := len(digits) - 1; i >= 0; i-- {
		d := digits[i]
		d += countUp
		countUp = d / 10
		d %= 10
		ans = append(ans, d)
	}

	if countUp > 0 {
		ans = append(ans, countUp)
	}
	for i := 0; i < len(ans)/2; i++ {
		j := len(ans) - 1 - i
		ans[i], ans[j] = ans[j], ans[i]
	}
	return ans
}

// @lc code=end

