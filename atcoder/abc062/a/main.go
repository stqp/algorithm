package main

import (
	"fmt"
)

func isA(a int) bool {
	switch a {
	case 1, 3, 5, 7, 8, 10, 12:
		return true
	}
	return false
}

func isB(a int) bool {
	switch a {
	case 4, 6, 9, 11:
		return true
	}
	return false
}

func isC(a int) bool {
	if a == 2 {
		return true
	}
	return false
}

func main() {
	var x, y int
	fmt.Scan(&x, &y)

	if (isA(x) && isA(y)) ||
		(isB(x) && isB(y)) ||
		(isC(x) && isC(y)) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}
