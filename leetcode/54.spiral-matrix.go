/*
 * @lc app=leetcode id=54 lang=golang
 *
 * [54] Spiral Matrix
 */

// @lc code=start
type Point struct {
	x int
	y int
}

var dirs []Point

var intMax int

func spiralOrder(matrix [][]int) []int {

	intMax = 1<<31 - 1

	ans := []int{}

	if len(matrix) == 0 {
		return ans
	}

	initDirs()
	cur := Point{
		x: -1,
		y: 0,
	}

	for {
		cango := false
		for len(dirs) > 0 {
			dir := dirs[0]
			dirs = dirs[1:]
			for {
				nx := cur.x + dir.x
				ny := cur.y + dir.y
				if nx >= 0 && nx < len(matrix[cur.y]) && ny >= 0 && ny < len(matrix) && matrix[ny][nx] < intMax {
					cango = true
					ans = append(ans, matrix[ny][nx])
					cur.x = nx
					cur.y = ny
					matrix[ny][nx] = intMax
					continue
				}
				break
			}
		}
		if !cango {
			break
		}
		initDirs()
	}

	return ans
}

func initDirs() {
	dirs = []Point{
		{x: 1, y: 0},
		{x: 0, y: 1},
		{x: -1, y: 0},
		{x: 0, y: -1},
	}
}

// @lc code=end

