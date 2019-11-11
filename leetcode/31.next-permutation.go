package main

import (
	"fmt"
	"sort"
)

/*
 * @lc app=leetcode id=31 lang=golang
 *
 * [31] Next Permutation
 */

// @lc code=start
// var a [][]int

type IntArray [][]int

func (ia IntArray) Len() int {
	return len(ia)
}
func (ia IntArray) Swap(i, j int) {
	ia[i], ia[j] = ia[j], ia[i]
}
func (ia IntArray) Less(i, j int) bool {
	if len(ia[i]) != len(ia[j]) {
		return len(ia[i]) < len(ia[j])
	}
	for k := 0; k < len(ia[i]); k++ {
		if ia[i][k] != ia[j][k] {
			return ia[i][k] < ia[j][k]
		}
	}
	return false
}

var ans [][]int
var found bool

func nextPermutation(nums []int) {
	ans = make([][]int, 0)
	gen(nums, 0, func(v []int) {
		b := make([]int, 0)
		b = copySlice(b, v)
		fmt.Println("b ", b)
		ans = append(ans, b)
	})

	ia := IntArray(ans)
	sort.Sort(ia)

	fmt.Println(ans)

	found := false
	for i := 0; i < len(ia); i++ {
		if isBigger(ia[i], nums) {
			for k := 0; k < len(nums); k++ {
				nums[k] = ia[i][k]
			}
			found = true
			break
		}
	}
	if !found {
		for k := 0; k < len(nums); k++ {
			nums[k] = ia[0][k]
		}
	}
	return
}

func gen(a []int, i int, f func([]int)) {
	if i > len(a) {
		f(a)
		return
	}
	gen(a, i+1, f)
	for j := i + 1; j < len(a); j++ {
		a[i], a[j] = a[j], a[i]
		gen(a, i+1, f)
		a[i], a[j] = a[j], a[i]
	}
}

func copySlice(to []int, from []int) []int {
	if len(to) == 0 {
		for _, v := range from {
			to = append(to, v)
		}
		return to
	}
	for i := 0; i < len(to); i++ {
		to[i] = from[i]
	}
	return to
}

func isBigger(i []int, a []int) bool {
	for k := 0; k < len(i); k++ {
		if i[k] != a[k] {
			return i[k] > a[k]
		}
	}
	return false // when two is same.
}

// @lc code=end

// func nextPermutation(nums []int) {
// 	a = make([][]int, 0)

// 	gen(nums, []int{})
// 	ia := IntArray(a)
// 	sort.Sort(ia)

// 	found := false
// 	for i := 0; i < len(ia); i++ {
// 		if isBigger(ia[i], nums) {
// 			for k := 0; k < len(nums); k++ {
// 				nums[k] = ia[i][k]
// 			}
// 			found = true
// 			break
// 		}
// 	}

// 	if !found {
// 		for k := 0; k < len(nums); k++ {
// 			nums[k] = ia[0][k]
// 		}
// 	}
// 	return
// }

// func gen(cand []int, perm []int) {
// 	//fmt.Println("cand", cand, "perm", perm, "a", a)
// 	if len(cand) == 0 {
// 		a = append(a, perm)
// 		return
// 	}
// 	for i := 0; i < len(cand); i++ {
// 		p := append([]int(nil), perm...)
// 		c := append([]int(nil), cand...)
// 		p = append(p, cand[i])
// 		c = append(c[0:i], c[i+1:len(c)]...)
// 		gen(c, p)
// 	}
// }

// func isBigger(i []int, a []int) bool {
// 	for k := 0; k < len(i); k++ {
// 		if i[k] != a[k] {
// 			return i[k] > a[k]
// 		}
// 	}
// 	return false // when two is same.
// }

// func toNum(nums []int) int {
// 	num := 0
// 	for i := len(nums) - 1; i >= 0; i-- {
// 		num += nums[i] * pow(10, (len(nums)-i-1))
// 	}
// 	return num
// }

// func pow(i, j int) (ans int) {
// 	ans = 1
// 	for k := 0; k < j; k++ {
// 		ans *= i
// 	}
// 	return ans
// }

/*
	for i := len(nums) - 1; i >= 0; i-- {
		for j := len(nums) - 1; j >= i; j-- {
			for k := len(nums) - 1; k >= j; k-- {

				nums[j], nums[k] = nums[k], nums[j]
				num := toNum(nums)
				fmt.Println(i, j, k, base, num, min, nums)
				if num > base && min > num {
					min = num
					copy(ans, nums)
					fmt.Println("===", min, ans)
				}
				nums[j], nums[k] = nums[k], nums[j]
			}
		}
	}

	if min != pow(2, 31) {
		copy(nums, ans)
		//fmt.Println(nums, ans)
		break
	}*/
