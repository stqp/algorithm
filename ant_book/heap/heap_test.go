package a

import (
	"container/heap"
	"testing"
)

func TestHeap(t *testing.T) {
	pq := make(heap.PriorityQueue, 0)

	pq.Push(&Item{value: "0", priority: 0, index: 0})
	heap.Push(1)
}
