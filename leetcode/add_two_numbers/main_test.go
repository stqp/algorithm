package aa

import (
	"fmt"
	"testing"
)

type ListNode struct {
	Val  int
	Next *ListNode
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	countup := 0
	a := l1
	b := l2
	ans := ListNode{}
	c := &ans
	for {
		tmpsum := 0
		if a != nil {
			tmpsum += a.Val
			a = a.Next
		}
		if b != nil {
			tmpsum += b.Val
			b = b.Next
		}
		tmpsum += countup

		countup = tmpsum / 10
		c.Val = tmpsum % 10
		//fmt.Printf("%d,%d\n", ans.Val, c.Val)

		if a == nil && b == nil && countup == 0 {
			break
		}
		c.Next = &ListNode{}
		c = c.Next
	}
	//fmt.Println(c.Next)
	return &ans
}

func TestAddTwoNumbers(t *testing.T) {

	a1 := ListNode{
		Val:  3,
		Next: nil,
	}
	a2 := ListNode{
		Val:  4,
		Next: &a1,
	}
	a3 := ListNode{
		Val:  2,
		Next: &a2,
	}
	b1 := ListNode{
		Val:  4,
		Next: nil,
	}
	b2 := ListNode{
		Val:  6,
		Next: &b1,
	}
	b3 := ListNode{
		Val:  5,
		Next: &b2,
	}
	l := addTwoNumbers(&a3, &b3)
	fmt.Println(l.Val, l.Next.Val, l.Next.Next.Val)
	t.Error()
}
