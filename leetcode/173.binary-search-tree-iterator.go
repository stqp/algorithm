/*
 * @lc app=leetcode id=173 lang=golang
 *
 * [173] Binary Search Tree Iterator
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
type BSTIterator struct {
	nums []int
	idx  int
}

func Constructor(root *TreeNode) BSTIterator {
	a := BSTIterator{}
	a.bfs(root)
	return a
}

func (b *BSTIterator) bfs(node *TreeNode) {
	if node == nil {
		return
	}
	if node.Left != nil {
		b.bfs(node.Left)
	}
	b.nums = append(b.nums, node.Val)
	if node.Right != nil {
		b.bfs(node.Right)
	}

}

/** @return the next smallest number */
func (b *BSTIterator) Next() int {
	ret := b.nums[b.idx]
	b.idx++
	return ret
}

/** @return whether we have a next smallest number */
func (b *BSTIterator) HasNext() bool {
	return b.idx < len(b.nums)
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * obj := Constructor(root);
 * param_1 := obj.Next();
 * param_2 := obj.HasNext();
 */
// @lc code=end

