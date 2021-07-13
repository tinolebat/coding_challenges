package main

import (
	"fmt"
	"tinolebat/utils"
)

func main() {
	// ans := utils.IsPalindrome(1212)
	var nums = []int{3, 2, 2, 3}
	val := 3
	length := utils.RemoveElement(nums, val)

	fmt.Println("\nNew Lenght:", length)
}
