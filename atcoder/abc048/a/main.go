package main

import "fmt"

func main() {
	var a, b, c string
	fmt.Scan(&a, &b, &c)

	fmt.Println("A" + string(b[0]) + "C")
}
