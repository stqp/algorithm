// TODO
package main

import "fmt"

type Pair struct {
	up   int
	down int
	val  byte
}

var t [500 + 10][500 + 10]Pair

func main() {
	var r, c, k int
	fmt.Scan(&r, &c, &k)

	var s string
	for i := 0; i < r; i++ {
		fmt.Scan(&s)
		for j := 0; j < c; j++ {
			t[i][j] = Pair{
				val: s[j],
			}
		}
	}
	for i := 0; i < r; i++ {
		for j := 0; j < c; j++ {
			count := 0
			for u := 0; u < k && u-i >= 0; u++ {
				if t[u-i][j].val == 'o' {
					count++
				}
			}
			t[i][j].up = count
			for d := 0; d < k && i+d < r; d++ {
				if t[i+d][j].val == 'o' {
					count++
				}
			}
			t[i][j].down = count
		}
	}
	for i := 0; i < r; i++ {
		for j := 0; j < c; j++ {
			for x := 0; x < k; x++ {

				t[i][j]
			}
		}
	}

}
