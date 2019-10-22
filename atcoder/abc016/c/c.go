package main

import "fmt"

var (
	n           int
	m           int
	r           [100][100]int
	searched    []int
	notsearched []int
)

func pop(s []int, i int) []int {
	if i == 0 {
		return append(s[1:])
	}
	return append(s[:i], s[i+1:]...)
}

func contains(s []int, e int) bool {
	for _, v := range s {
		if e == v {
			return true
		}
	}
	return false
}

func dfs(userID int) int {

	searched = make([]int, 0)
	notsearched = make([]int, 0)
	neiborFriends := make([]int, 0)

	// 自分は調査済とする
	searched = append(searched, userID)

	// 自分の友だちは対象に入れない。
	for i := 1; i <= n; i++ {
		if r[userID][i] == 1 {
			neiborFriends = append(neiborFriends, i)
		}
	}

	// まずは最短の友達の友達を調査対象として用意する
	for len(neiborFriends) > 0 {
		id := neiborFriends[0]
		for i := 1; i <= n; i++ {
			if r[id][i] == 1 && !contains(searched, i) && !contains(neiborFriends, i) && !contains(notsearched, i) {
				notsearched = append(notsearched, i)
			}
		}
		neiborFriends = pop(neiborFriends, 0)
		searched = append(searched, id)
	}

	//　ここからカウント開始
	// 問題の意図を勘違いして友達の友達の友達の... と繋がっている人全てだと勘違いした。。。
	ans := 0
	for len(notsearched) > 0 {
		ans++
		id := notsearched[0]
		for i := 1; i <= n; i++ {
			if r[id][i] == 1 && !contains(searched, i) && !contains(notsearched, i) {
				//notsearched = append(notsearched, i)
			}
		}
		notsearched = pop(notsearched, 0)
		searched = append(searched, id)
	}
	return ans
}

func main() {
	fmt.Scan(&n, &m)
	for i := 0; i < m; i++ {
		var a, b int
		fmt.Scan(&a, &b)
		r[a][b] = 1
		r[b][a] = 1
	}

	for i := 1; i <= n; i++ {
		fmt.Println(dfs(i))
	}
}
