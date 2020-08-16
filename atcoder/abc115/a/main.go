package main

import (
	"fmt"
)

func main() {
	var d int
	fmt.Scan(&d)

	s := ""
	switch d {
	case 22:
		s = "Christmas Eve Eve Eve"
	case 23:
		s = "Christmas Eve Eve"
	case 24:
		s = "Christmas Eve"
	case 25:
		s = "Christmas"
	}
	fmt.Println(s)
}
