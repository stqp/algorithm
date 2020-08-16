package main

import (
	"fmt"
)

func main() {
	var k int
	fmt.Scan(&k)

	oddCount := 0
	evenCount := 0

	for i := 1; i <= k; i++ {
		if i%2 == 0 {
			evenCount++
		} else {
			oddCount++
		}
	}
	fmt.Println(oddCount * evenCount)
}
