package main

import (
	"sort"
)

/*
 * @lc app=leetcode id=23 lang=golang
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

type byNodes []*ListNode

func (bn byNodes) Len() int {
	return len(bn)
}
func (bn byNodes) Swap(i, j int) {
	bn[i], bn[j] = bn[j], bn[i]
}
func (bn byNodes) Less(i, j int) bool {
	return bn[i].Val < bn[j].Val
}

func mergeKLists(lists []*ListNode) *ListNode {
	var ans *ListNode
	var allNodes []*ListNode
	for _, l := range lists {
		for l != nil {
			allNodes = append(allNodes, l)
			l = l.Next
		}

		//ans = merge(ans, l)
	}

	nodes := byNodes(allNodes)
	sort.Sort(nodes)

	ans = &ListNode{
		Val:  0,
		Next: nil,
	}
	var t *ListNode
	t = ans
	for _, n := range nodes {
		t.Next = n
		t = n
	}
	t.Next = nil
	return ans.Next
}

/*
func merge(list1 *ListNode, list2 *ListNode) *ListNode {
	ans := &ListNode{
		Val:  0,
		Next: nil,
	}
	t := ans
	for {
		fmt.Println(list1, list2)
		if list1 != nil && list2 != nil {
			if list1.Val <= list2.Val {
				t.Next = list1
				t = t.Next
				list1 = list1.Next
			} else {
				t.Next = list2
				t = t.Next
				list2 = list2.Next
			}
		} else if list1 != nil {
			t.Next = list1
			t = t.Next
			list1 = list1.Next
		} else if list2 != nil {
			t.Next = list2
			t = t.Next
			list2 = list2.Next
		} else {
			break
		}
	}
	return ans.Next
}*/

// @lc code=end
