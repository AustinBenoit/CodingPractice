package main

import "fmt"

func main() {
	BinarySearch(3, nil)
}

func BinarySearch(value int, data []int) (found bool) {
	if data == nil || len(data) == 0 {
		return false
	}

	i := 0
	j := len(data)
	mid := ((j - i) / 2) +
		i
	for i < j {
		if data[mid] == value {
			return true
		}

		if data[mid] < value {
			i = mid + 1
		} else {
			j = mid
		}
		mid = ((j - i) / 2) + i
		fmt.Println(mid)
	}
	return false
}
