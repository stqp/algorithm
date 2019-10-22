package main

import (
	"fmt"
)

var n int
var m int
var a []int
var b []int
var c [][]int

var intmax = 1<<31 - 1

func min(xx, yy int) int {
	if xx > yy {
		return yy
	}
	return xx
}

var dp []int

func dfs(i int, t int, sum int) int {
	if i == m {
		for _, v := range t {
			if v == 0 {
				return intmax
			}
		}
		return sum
	}
	var nt []int
	for _, v := range t {
		nt = append(nt, v)
	}
	for _, v := range c[i] {
		nt[v-1]++
	}
	return min(dfs(i+1, t, sum), dfs(i+1, nt, sum+a[i]))
}

func main() {
	fmt.Scan(&n, &m)
	var t []int
	for i := 0; i < n; i++ {
		t = append(t, 0)
	}
	for i := 0; i < m; i++ {
		var aa, bb int
		fmt.Scan(&aa, &bb)
		a = append(a, aa)
		b = append(b, bb)
		c = append(c, []int{})
		var cc int
		for j := 0; j < b[i]; j++ {
			fmt.Scan(&cc)
			c[i] = append(c[i], cc)
		}
	}
	ans := dfs(0, t, 0)
	if ans == intmax {
		fmt.Println(-1)
	} else {
		fmt.Println(ans)
	}

}
