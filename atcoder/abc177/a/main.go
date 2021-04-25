package main

import (
	"fmt"
)

func main() {
	var d, t, s int
	fmt.Scan(&d, &t, &s)
	if s*t >= d {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}
