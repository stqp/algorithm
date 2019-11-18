/*
 * @lc app=leetcode id=208 lang=golang
 *
 * [208] Implement Trie (Prefix Tree)
 */

// @lc code=start
type Trie struct {
	m map[string]bool
}

/** Initialize your data structure here. */
func Constructor() Trie {
	m := make(map[string]bool)
	return Trie{
		m: m,
	}
}

/** Inserts a word into the trie. */
func (t *Trie) Insert(word string) {
	t.m[word] = true
}

/** Returns if the word is in the trie. */
func (t *Trie) Search(word string) bool {
	_, ok := t.m[word]
	return ok
}

/** Returns if there is any word in the trie that starts with the given prefix. */
func (t *Trie) StartsWith(prefix string) bool {
	for k, _ := range t.m {
		if len(k) >= len(prefix) {
			if string(k[0:len(prefix)]) == prefix {
				return true
			}
		}
	}
	return false
}

/**
 * Your Trie object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Insert(word);
 * param_2 := obj.Search(word);
 * param_3 := obj.StartsWith(prefix);
 */
// @lc code=end

