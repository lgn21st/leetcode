/*
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 *
 */

package main

import "fmt"

func twoSum(numbers []int, target int) (index1 int, index2 int) {
	hash := make(map[int]int)
	for i, num := range numbers {
		if j, ok := hash[target-num]; ok {
			index1 = j + 1
			index2 = i + 1
		} else {
			hash[num] = i
		}
	}
	return index1, index2
}

func main() {
	numbers := []int{2, 7, 11, 15}
	target := 9
	fmt.Println(twoSum(numbers, target))
}
