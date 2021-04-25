package main

import "fmt"

func Abs(x int) int {
	if x < 0 {
		return x * (-1)
	}
	return x
}

func main() {
	var s string
	fmt.Scan(&s)

	var a [500]int

	for _, t := range s {
		a[t]++
	}
	for _, t := range "ABCDE" {
		fmt.Print(a[t])
		fmt.Print(" ")
	}
	fmt.Println(a['F'])
}
