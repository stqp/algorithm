package main

import (
	"fmt"
)

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	var takahashi, aoki int

	for true {
		if c == 0 {
			takahashi++
			if takahashi >= a {
				fmt.Println("Aoki")
				return
			}
			aoki++
			if aoki >= b {
				fmt.Println("Takahashi")
				return
			}
		} else {
			aoki++
			if aoki >= b {
				fmt.Println("Takahashi")
				return
			}
			takahashi++
			if takahashi >= a {
				fmt.Println("Aoki")
				return
			}
		}
	}
}
