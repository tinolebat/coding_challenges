package utils

import (
	"fmt"
)

func RemoveElement(nums []int, val int) int {

	i := 0
	for j := 0; j < len(nums); j++ {
		if nums[j] != val {
			nums[i] = nums[j]
			i++
		}
	}

	for i := 0; i < len(nums); i++ {
		fmt.Print(nums[i])
	}
	return i
}
