package heap

type Heap struct {
	size int
	heap []int
}

func NewHeap() *Heap {
	return &Heap{
		size: 0,
		heap: make([]int, 0),
	}
}

func (h *Heap) Push(x int) {
	h.heap = append(h.heap, -1)
	i := h.size
	h.size++
	h.heap[i] = x

	for i > 0 {
		var p int
		if i%2 == 1 {
			p = (i - 1) / 2
		} else {
			p = (i - 2) / 2
		}
		if h.heap[p] < h.heap[i] {
			break
		}
		h.heap[p], h.heap[i] = h.heap[i], h.heap[p]
		i = p
	}

}

func (h *Heap) Pop() int {
	ret := h.heap[0]
	h.size--
	x := h.heap[h.size]

	i := 0
	for i*2+1 < h.size {
		a := i*2 + 1
		b := i*2 + 2

		if b < h.size && h.heap[b] < h.heap[a] {
			a = b
		}

		if h.heap[a] >= x {
			break
		}

		h.heap[i] = h.heap[a]
		i = a
	}
	h.heap[i] = x
	h.heap = h.heap[:h.size]
	return ret
}
