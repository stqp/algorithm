/*
 * @lc app=leetcode id=56 lang=golang
 *
 * [56] Merge Intervals
 */

// @lc code=start
func merge(intervals [][]int) [][]int {

	intMax := 1<<16 - 1
	xs := make([]int, intMax)

	var remain []int
	for i, interval := range intervals {
		start := interval[0]
		end := interval[1]
		if start == end {
			remain = append(remain, i)
			continue
		}
		xs[start]++
		xs[end]--
	}
	for _, v := range remain {
		s := intervals[v][0]
		if xs[s] == 0 {
			xs[s] = intMax
		}
	}

	var ans [][]int
	inInterval := false
	sum := 0
	var start, end int
	for i, x := range xs {
		//幅がゼロ(=範囲ではなくもはや点)という特殊ケース
		if x == intMax {
			if !inInterval {
				ans = append(ans, []int{i, i})
				continue
			} else {
				x = 0
			}
		}
		sum += x
		if !inInterval && sum > 0 {
			inInterval = true
			start = i
		} else if inInterval && sum == 0 {
			inInterval = false
			end = i
			ans = append(ans, []int{start, end})
		}
	}
	return ans
}

// @lc code=end

