package string_to_integer_atoi

import (
	"fmt"
	"math"
	"testing"
)

func myAtoi(str string) int {

	if len(str) == 0 {
		return 0
	}

	var ans []rune
	// true means plus, false means minus.
	sign := 1
	found := false
	for _, v := range str {
		if v == ' ' {
			if found {
				break
			}
			continue
		} else if v == '+' {
			if found {
				break
			}
			sign = 1
			found = true
		} else if v == '-' {
			if found {
				break
			}
			sign = -1
			found = true
		} else if '0' <= v && v <= '9' {
			ans = append(ans, v)
			found = true
		} else if v == '.' {
			break
		} else {
			break
		}
	}
	num := int(0)
	for i := 0; i < len(ans); i++ {
		v := ans[len(ans)-1-i]
		switch v {
		case '0':
			num += pow(10, i) * 0
		case '1':
			num += pow(10, i) * 1
		case '2':
			num += pow(10, i) * 2
		case '3':
			num += pow(10, i) * 3
		case '4':
			num += pow(10, i) * 4
		case '5':
			num += pow(10, i) * 5
		case '6':
			num += pow(10, i) * 6
		case '7':
			num += pow(10, i) * 7
		case '8':
			num += pow(10, i) * 8
		case '9':
			num += pow(10, i) * 9
		}
	}
	fmt.Println(num, sign)
	if sign > 0 {
		if num > (pow(2, 31) - 1) {
			num = (pow(2, 31) - 1)
		}
	} else {
		if num > (pow(2, 31)) {
			num = (pow(2, 31))
		}
	}

	return int(num) * sign
}

func Add32(left, right int32) (ans int32, overflow bool) {
	if right > 0 {
		if left > math.MaxInt32-right {
			return 0, true
		}
	} else {
		if left < math.MinInt32-right {
			return 0, true
		}
	}
	return left + right, false
}

func pow(a int, b int) int {
	ans := int(1)
	for i := 0; i < b; i++ {
		ans *= a
	}
	return ans
}

func Test(t *testing.T) {

	tests := []struct {
		arg      string
		expected int
	}{
		{arg: "42", expected: 42},
		{arg: "   -42", expected: -42},
		{arg: "4193 with words", expected: 4193},
		{arg: "-91283472332", expected: -2147483648},
		{arg: "9223372036854775808", expected: 2147483647},
		{arg: "-5-", expected: -5},
		{arg: "18446744073709551617", expected: 2147483647},
	}

	for _, test := range tests {
		actual := myAtoi(test.arg)
		if actual != test.expected {
			t.Error(test.expected, actual)
		}
	}
}
