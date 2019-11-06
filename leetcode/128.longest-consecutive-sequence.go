import "fmt"

/*
 * @lc app=leetcode id=128 lang=golang
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
func longestConsecutive(nums []int) int {

	var minNum int
	for _, num := range nums {
		if num < minNum {
			minNum = num
		}
	}

	intMax := 1<<28 - 1
	xs := make([]bool, intMax)
	for _, num := range nums {
		num += (-1) * minNum
		xs[num] = true
	}

	max := 0
	c := 0
	nowSequence := false
	fmt.Println(xs[0:10])
	for _, x := range xs {
		if nowSequence == false {
			if x == true {
				nowSequence = true
				c++
			} else {
				// do nothing.
			}
		} else {
			if x == true {
				c++
			} else {
				nowSequence = false
				if max < c {
					max = c
				}
				c = 0
			}
		}
	}
	return max
}

// @lc code=end

