package main

import "fmt"

func main() {
	var n string
	fmt.Scan(&n)

	b := n[0]
	for _, a := range n {
		if byte(a) != b {
			fmt.Println("DIFFERENT")
			return
		}
	}
	fmt.Println("SAME")
}
