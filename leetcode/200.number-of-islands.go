/*
 * @lc app=leetcode id=200 lang=golang
 *
 * [200] Number of Islands
 */

// @lc code=start
var t [][]byte
var lenX int
var lenY int

func numIslands(grid [][]byte) int {

	t = grid
	lenY = len(t)
	if lenY == 0 {
		return 0
	}

	lenX = len(t[0])

	var ans int

	for y := 0; y < len(t); y++ {
		for x := 0; x < len(t[y]); x++ {
			if t[y][x] == '1' {
				dfs(x, y)
				ans++
			}
		}
	}
	return ans
}

func dfs(x, y int) {

	dx := []int{-1, 0, 1, 0}
	dy := []int{0, -1, 0, 1}

	t[y][x] = '0'

	for i := 0; i < 4; i++ {
		nx := x + dx[i]
		ny := y + dy[i]
		if 0 <= nx && nx < lenX && 0 <= ny && ny < lenY {
			if t[ny][nx] == '1' {
				dfs(nx, ny)
			}
		}
	}
}

// @lc code=end

