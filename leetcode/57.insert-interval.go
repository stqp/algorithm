/*
 * @lc app=leetcode id=57 lang=golang
 *
 * [57] Insert Interval
 */

// @lc code=start
func insert(intervals [][]int, newInterval []int) [][]int {

	var ans [][]int
	var inInterval bool

	ns := newInterval[0]
	ne := newInterval[1]
	nsi := ns
	//nse := 0
	inserted := false

	for _, inter := range intervals {
		s := inter[0]
		e := inter[1]

		if inserted {
			ans = append(ans, inter)
			continue
		}

		if !inInterval {
			if ns < s {
				inInterval = true
				nsi = ns
			} else if s <= ns && ns <= e {
				inInterval = true
				nsi = s
			} else if e < ns {
				ans = append(ans, inter)
			}
		}
		if inInterval {
			if ne < s {
				ans = append(ans, []int{nsi, ne})
				ans = append(ans, inter)
				inserted = true
			} else if s <= ne && ne <= e {
				ans = append(ans, []int{nsi, e})
				//ans = append(ans, inter)
				inserted = true
			} else if e < ne {

			}
		}
	}

	if !inserted {
		ans = append(ans, []int{nsi, newInterval[1]})
	}

	return ans

}

// @lc code=end

