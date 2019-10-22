package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)

	if a > b && a > c {
		if b > c {
			fmt.Println(1)
			fmt.Println(2)
			fmt.Println(3)
		} else {
			fmt.Println(1)
			fmt.Println(3)
			fmt.Println(2)
		}
	} else if b > a && b > c {
		if a > c {
			fmt.Println(2)
			fmt.Println(1)
			fmt.Println(3)
		} else {
			fmt.Println(3)
			fmt.Println(1)
			fmt.Println(2)
		}
	} else {
		if a > b {
			fmt.Println(2)
			fmt.Println(3)
			fmt.Println(1)
		} else {
			fmt.Println(3)
			fmt.Println(2)
			fmt.Println(1)
		}
	}

}
