/*
 * @lc app=leetcode id=212 lang=golang
 *
 * [212] Word Search II
 */

// @lc code=start
var found map[string]bool

var minLen int
var maxLen int

var lenX int
var lenY int

var b [][]byte
var ws []string
var cand []string

func findWords(board [][]byte, words []string) []string {
	found = make(map[string]bool)
	b = board
	ws = words

	for y := 0; y < len(b); y++ {
		for x := 0; x < len(b[y]); x++ {
			find(x, y, "")
		}
	}

	var ans []string
	for _, w := range words {
		if _, ok := found[w]; ok {
			ans = append(ans, w)
		}
	}
	return ans
}

func find(x int, y int, str string) {

	dx := []int{-1, 0, 1, 0}
	dy := []int{0, -1, 0, 1}

	if minLen > len(str) || len(str) > maxLen {
		return
	}

	found[str] = true

	for i := 0; i < 4; i++ {
		nx := x + dx[i]
		ny := y + dy[i]
		if 0 <= nx && nx < lenX && 0 <= ny && ny < lenY {
			find(nx, ny, str+string(b[ny][nx]))
		}
	}
}

func setMinMax() {
	minLen = (1<<31 - 1)
	maxLen = 0

	for i := 0; i < len(ws); i++ {
		if minLen > len(ws) {
			minLen = len(ws)
		}
		if maxLen < len(ws) {
			maxLen = len(ws)
		}
	}
}

// @lc code=end

