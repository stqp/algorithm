/*
 * @lc app=leetcode id=146 lang=golang
 *
 * [146] LRU Cache
 */

// @lc code=start
type LRUCache struct {
	capacity int
	items    map[int]int
	lru      []int
}

func Constructor(capacity int) LRUCache {
	m := make(map[int]int)
	return LRUCache{
		capacity: capacity,
		items:    m,
	}
}

func (l *LRUCache) Put(key int, value int) {
	if _, ok := l.items[key]; ok {
		l.items[key] = value
		l.recent(key)
	} else {
		l.items[key] = value
		l.lru = append(l.lru, key)
		if len(l.lru) > l.capacity {
			k := l.lru[0]
			l.lru = l.lru[1:]
			delete(l.items, k)
		}
	}
}

func (l *LRUCache) Get(key int) int {
	if v, ok := l.items[key]; ok {
		l.recent(key)
		return v
	}
	return -1
}

func (l *LRUCache) recent(key int) {
	var s int
	for i, v := range l.lru {
		if v == key {
			s = i
		}
	}
	for i := s; i < len(l.lru)-1; i++ {
		l.lru[i], l.lru[i+1] = l.lru[i+1], l.lru[i]
	}
}

// type LRUCache struct {
// 	capacity      int
// 	items         map[int]int
// 	lruIndexCache map[int]int
// 	lru           []int
// }

// func Constructor(capacity int) LRUCache {
// 	m := make(map[string]int)
// 	m2 := make(map[int]int)
// 	return LRUCache{
// 		capacity: capacity,
// 		items:    m,
// 	}
// }

// func (l *LRUCache) Put(key int, value int) {
// 	if v, ok := l.items[key]; ok {

// 		l.items[key] = value
// 		i := l.lruIndexCache[key]
// 		cv := l.lru[i]
// 		l.lruIndexCache = append(l.lru[:i], l.lru[i+1:]...)
// 		l.lruIndexCache = append(l.lruIndexCache, cv)

// 	} else {

// 		l.lru = append(l.lru, key)
// 		if len(l.lru) > l.capacity {
// 			delIndex := l.lru[0]
// 			l.lru = l.lru[1:]
// 			delete(l.lruIndexCache)
// 		} else {
// 			l.lruIndexCache[key] = len(l.lru) - 1
// 			l.items[key] = value
// 		}
// 	}
// }

// func (l *LRUCache) Get(key int) int {
// 	node := l.root
// 	if v, ok := l.m[key]; ok {
// 		ans := v
// 		l.toRecent(node)
// 		l.debug()
// 		return v
// 	}
// 	l.debug()
// 	return -1
// }

// func (l *LRUCache) toRecent(node *Node) {
// 	target := node.next
// 	if target.next == nil {
// 		return
// 	}

// 	node.next = target.next
// 	target.next.prev = node

// 	l.tail.next = target
// 	target.prev = l.tail
// 	target.next = nil
// 	l.tail = target
// }

// type Node struct {
// 	key   int
// 	value int
// 	next  *Node
// 	prev  *Node
// }

// type LRUCache struct {
// 	root      *Node
// 	tail      *Node
// 	itemCount int
// 	capacity  int
// 	m         map[string]*Node
// }

// func Constructor(capacity int) LRUCache {
// 	return LRUCache{
// 		capacity: capacity,
// 		root: &Node{
// 			key:   -1,
// 			value: -1,
// 		},
// 	}
// }

// func (l *LRUCache) Put(key int, value int) {
// 	node := l.root
// 	for node.next != nil {
// 		if node.next.key == key {
// 			node.next.value = value
// 			l.toRecent(node)
// 			l.debug()
// 			return
// 		}
// 		node = node.next
// 	}

// 	node.next = &Node{
// 		key:   key,
// 		value: value,
// 		prev:  node,
// 	}
// 	l.m[key] = node.next
// 	l.tail = node.next
// 	l.itemCount++

// 	if l.itemCount > l.capacity {
// 		delete(l.m, key)
// 		l.root.next = l.root.next.next
// 	}
// 	l.debug()
// }

// func (l *LRUCache) Get(key int) int {
// 	node := l.root
// 	if v, ok := l.m[key]; ok {
// 		ans := v
// 		l.toRecent(node)
// 		l.debug()
// 		return v
// 	}
// 	l.debug()
// 	return -1
// }

// func (l *LRUCache) toRecent(node *Node) {
// 	target := node.next
// 	if target.next == nil {
// 		return
// 	}

// 	node.next = target.next
// 	target.next.prev = node

// 	l.tail.next = target
// 	target.prev = l.tail
// 	target.next = nil
// 	l.tail = target

// }

// func (l *LRUCache) debug() {
// 	cur := l.root
// 	var out []Node

// 	for cur != nil {
// 		a := Node{
// 			cur.key, cur.value, nil, nil,
// 		}
// 		out = append(out, a)
// 		cur = cur.next
// 	}
// 	fmt.Println(out)
// }

/**
 * Your LRUCache object will be instantiated and called as such:
 * obj := Constructor(capacity);
 * param_1 := obj.Get(key);
 * obj.Put(key,value);
 */
// @lc code=end

