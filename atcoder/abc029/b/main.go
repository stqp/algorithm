package main

import "fmt"

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var s [100]string
	var ans int64
	for i := 0; i < 12; i++ {
		fmt.Scan(&s[i])
		for j := 0; j < len(s[i]); j++ {
			if s[i][j] == 'r' {
				ans++
				break
			}
		}
	}
	fmt.Println(ans)

}
