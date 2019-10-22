package heap

import (
	"testing"
)

func TestHeap(t *testing.T) {
	h := Heap{}
	h.Push(5)
	h.Push(9)
	h.Push(2)
	h.Push(3)
	h.Push(1)
	h.Push(8)
	h.Push(7)

	for _, expected := range []int{1, 2, 3, 5, 7, 8, 9} {
		actual := h.Pop()
		if actual != expected {
			t.Error("actual:", actual, "expected:", expected)
		}
	}

}
