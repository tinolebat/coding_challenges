package utils

import (
	"fmt"
)

func IsPalindrome(x int) bool {
	var result = 0
	var t = x
	var digit = 0
	if x < 0 {
		return false
	}

	for t != 0 {
		digit = t % 10
		t /= 10
		result = result*10 + digit
	}

	if result != x {
		fmt.Println("Not palindrome")
		return false
	}
	fmt.Println("palindrome")
	return true
}
