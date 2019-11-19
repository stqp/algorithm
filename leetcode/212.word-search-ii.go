/*
 * @lc app=leetcode id=212 lang=golang
 *
 * [212] Word Search II
 */

// @lc code=start

var ans []string

func findWords(board [][]byte, words []string) []string {
	ans = []string{}
	root := buildTrie(words)
	for i := 0; i < len(board); i++ {
		for j := 0; j < len(board[0]); j++ {
			dfs(board, i, j, root)
		}
	}
	return ans
}

func dfs(board [][]byte, i int, j int, p *TrieNode) {
	c := board[i][j]

	if c == '#' || p.next[c] == nil {
		return
	}
	p = p.next[c]

	if p.word != "" {
		ans = append(ans, p.word)
		p.word = ""
	}

	board[i][j] = '#'
	if i > 0 {
		dfs(board, i-1, j, p)
	}
	if j > 0 {
		dfs(board, i, j-1, p)
	}
	if i < len(board)-1 {
		dfs(board, i+1, j, p)
	}
	if j < len(board[0])-1 {
		dfs(board, i, j+1, p)
	}
	board[i][j] = c
}

type TrieNode struct {
	next map[byte]*TrieNode
	word string
}

func buildTrie(words []string) *TrieNode {
	m0 := make(map[byte]*TrieNode)
	root := &TrieNode{next: m0}

	for _, w := range words {
		p := root
		for _, v := range w {
			c := byte(v)
			if p.next[c] == nil {
				m := make(map[byte]*TrieNode)
				p.next[c] = &TrieNode{next: m}
			}
			p = p.next[c]
		}
		p.word = w
	}
	return root
}

// @lc code=end

