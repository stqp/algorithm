package main

import (
	"fmt"
)

var (
	w string
)

func main() {
	fmt.Scan(&w)
	fmt.Println(w + string("s"))
}
