package main

import "fmt"

var x []uint64

func gcd(a uint64, b uint64) uint64 {
	x = append(x, b)
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func main() {
	var a uint64
	var b uint64
	fmt.Scan(&a, &b)
	maxgcd := gcd(a, b)
	fmt.Println(x, maxgcd)
}
