package main

import "sort"

/*
 * @lc app=leetcode id=128 lang=golang
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
func longestConsecutive(nums []int) int {

	sort.Ints(nums)

	if len(nums) == 0 {
		return 0
	}

	seqMax := 1
	count := 1
	for i := 0; i < len(nums)-1; i++ {
		if nums[i] == nums[i+1] {
			continue
		} else if nums[i]+1 == nums[i+1] {
			count++
		} else {
			count = 1
		}
		if count > seqMax {
			seqMax = count
		}
	}
	return seqMax

}

// @lc code=end
