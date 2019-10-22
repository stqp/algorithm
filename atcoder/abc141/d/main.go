package main

import (
	"fmt"
)

var (
	N, M int
)

// PriorityQueue is something.
type PriorityQueue struct {
	HeapSize int
	heap     []int
	size     int
	Reverse  bool
}

// Push pushs a number to queue
func (p *PriorityQueue) Push(x int) {

	// initialization
	if p.HeapSize == 0 {
		p.HeapSize = 100
	}
	if len(p.heap) == 0 && p.HeapSize > 0 {
		p.heap = make([]int, p.HeapSize)
	}
	i := p.size
	p.size++
	for i > 0 {
		n := (i - 1) / 2
		if p.Reverse {
			if p.heap[n] > x {
				break
			}
		} else {
			if p.heap[n] <= x {
				break
			}
		}

		p.heap[i] = p.heap[n]
		i = n
	}
	p.heap[i] = x
}

// Pop pops a number
func (p *PriorityQueue) Pop() int {
	ret := p.heap[0]
	p.size--
	x := p.heap[p.size]
	i := 0
	for (i*2 + 1) < p.size {
		a := i*2 + 1
		b := i*2 + 2
		if p.Reverse {
			if b < p.size && p.heap[b] >= p.heap[a] {
				a = b
			}
			if p.heap[a] < x {
				break
			}
		} else {
			if b < p.size && p.heap[b] < p.heap[a] {
				a = b
			}
			if p.heap[a] >= x {
				break
			}
		}

		p.heap[i] = p.heap[a]
		i = a
	}
	p.heap[i] = x
	return ret
}

func main() {

	fmt.Scan(&N, &M)
	pq := PriorityQueue{
		HeapSize: 1000*100 + 10,
		Reverse:  true,
	}

	var a int
	for i := 0; i < N; i++ {
		fmt.Scan(&a)
		pq.Push(a)
	}
	for i := 0; i < M; i++ {
		max := pq.Pop() / 2
		pq.Push(max)
	}

	ans := uint64(0)
	for i := 0; i < N; i++ {
		ans += uint64(pq.Pop())
	}
	fmt.Println(ans)
}
