/*
 * @lc app=leetcode id=162 lang=golang
 *
 * [162] Find Peak Element
 */

// @lc code=start
func findPeakElement(nums []int) int {

	if len(nums) == 1 {
		return 0
	}

	if len(nums) == 2 {
		if nums[0] > nums[1] {
			return 0
		} else {
			return 1
		}
	}

	for i := 0; i < len(nums); i++ {
		if i == 0 {
			if nums[i] > nums[i+1] {
				return i
			}
		} else if i == (len(nums) - 1) {
			if nums[i-1] < nums[i] {
				return i
			}
		} else if nums[i-1] < nums[i] && nums[i] > nums[i+1] {
			return i
		}
	}
	return -1
}

// @lc code=end

