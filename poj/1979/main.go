package main

import (
	"bufio"
	"fmt"
	"os"
)

var (
	table [20][20]rune
	w     int
	h     int
	ans   int
)

func p() {
	for j := 0; j < h; j++ {
		for i := 0; i < w; i++ {
			fmt.Print(string(table[i][j]))
		}
		fmt.Println()
	}

}

func walk(x, y int) {

	table[x][y] = '#'
	ans++
	p()

	d := [][]int{
		{-1, 0}, {1, 0}, {0, -1}, {0, 1},
	}

	for i := 0; i < 4; i++ {
		dx := d[i][0]
		dy := d[i][1]
		nx := x + dx
		ny := y + dy
		if 0 <= nx && nx < w && 0 <= ny && ny < h && table[nx][ny] == '.' {
			walk(nx, ny)
		}
	}
}

func main() {
	r := bufio.NewReader(os.Stdin)

	fmt.Scan(&w, &h)
	sx := 0
	sy := 0
	for j := 0; j < h; j++ {
		for i := 0; i < w; i++ {
			ch, _ := r.ReadByte()
			table[i][j] = rune(ch)
			if table[i][j] == '@' {
				sx = i
				sy = j
			}
		}
		r.ReadByte()
	}

	walk(sx, sy)
	fmt.Println(ans)
}
