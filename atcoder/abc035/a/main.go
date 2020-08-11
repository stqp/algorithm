package main

import "fmt"

func main() {
	var w, h int
	fmt.Scan(&w, &h)

	if w/4 == h/3 {
		fmt.Println("4:3")
	} else if w/16 == h/9 {
		fmt.Println("16:9")
	}
}
