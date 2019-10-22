package main

import "fmt"

var (
	N  int
	H  int
	A  int
	B  int
	C  int
	D  int
	E  int
	dp [1000*1000 + 10][1000*1000 + 10]int
)

func main() {
	fmt.Scan(&N, &H, &A, &B, &C, &D, &E)

	min := int(^uint(0) >> 1)
	for x := 0; x <= N; x++ {
		for y := 0; y <= N; y++ {
			if (H + B*x + D*y - (N-x-y)*E) > 0 {
				if min > (x*A)+(y*C) {
					min = (x * A) + (y * C)
				}
			}
		}
	}

	fmt.Println(min)

}
