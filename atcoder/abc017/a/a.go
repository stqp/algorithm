package main

import "fmt"

func main() {
	var s1, s2, s3, e1, e2, e3 int
	fmt.Scan(&s1, &e1, &s2, &e2, &s3, &e3)

	sum := s1/10*e1 + s2/10*e2 + s3/10*e3
	fmt.Println(sum)
}
