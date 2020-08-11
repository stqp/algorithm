package main

import "fmt"

func main() {
	var a, b string
	fmt.Scan(&a, &b)

	if a == "H" && b == "H" {
		fmt.Println("H")
	} else if a == "H" && b == "D" {
		fmt.Println("D")
	} else if a == "D" && b == "H" {
		fmt.Println("D")
	} else if a == "D" && b == "D" {
		fmt.Println("H")
	}
}
