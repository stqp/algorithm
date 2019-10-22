/*
 * @lc app=leetcode id=4 lang=golang
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {

	sumnums := make([]int, len(nums1)+len(nums2))
	i := 0
	a := 0
	b := 0
	for {
		if a == len(nums1) && b == len(nums2) {
			break
		}
		if a == len(nums1) {
			sumnums[i] = nums2[b]
			b++
		} else if b == len(nums2) {
			sumnums[i] = nums1[a]
			a++
		} else if nums1[a] == nums2[b] {
			sumnums[i] = nums1[a]
			a++
		} else if nums1[a] < nums2[b] {
			sumnums[i] = nums1[a]
			a++
		} else {
			sumnums[i] = nums2[b]
			b++
		}
		i++
	}
	l := len(sumnums)
	if l%2 == 0 {
		return float64(sumnums[l/2]+sumnums[l/2-1]) / 2
	} else {
		return float64(sumnums[(l-1)/2])
	}
}

// @lc code=end

