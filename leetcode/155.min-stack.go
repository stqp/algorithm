package main

/*
 * @lc app=leetcode id=155 lang=golang
 *
 * [155] Min Stack
 */

// @lc code=start
type MinStack struct {
	stack   []int
	min     int
	cleared bool
}

/** initialize your data structure here. */
func Constructor() MinStack {
	a := MinStack{}
	a.clearMinValue()
	return a
}

func (s *MinStack) Push(x int) {
	s.stack = append(s.stack, x)
	s.clearMinValue()
}

func (s *MinStack) Pop() {
	s.stack = s.stack[0 : len(s.stack)-1]
	s.clearMinValue()
}

func (s *MinStack) Top() int {
	return s.stack[len(s.stack)-1]
}

func (s *MinStack) GetMin() int {
	if !s.cleared {
		return s.min
	}
	m := s.stack[0]
	for _, v := range s.stack {
		if m > v {
			m = v
		}
	}
	s.min = m
	s.cleared = false
	return s.min
}

func (s *MinStack) clearMinValue() {
	if s.cleared {
		return
	}
	s.min = 1<<31 - 1
	s.cleared = true
}

/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */
// @lc code=end
