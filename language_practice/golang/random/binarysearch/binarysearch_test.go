package main

import (
	"fmt"
	"testing"
)

func TestSliceNil(t *testing.T) {
	found := BinarySearch(2, nil)
	if found != false {
		t.Errorf("Failed with nil slice got :%v ", found)
	}
}

func TestValid(t *testing.T) {

	var tests = []struct {
		value int
		sl    []int
	}{
		{0, []int{0}},
		{0, []int{0, 1, 2}},
		{2, []int{0, 1, 2}},
		{1, []int{0, 1, 2}},
		{1, []int{0, 1, 2, 3}},
		{2, []int{0, 1, 2, 3}},
		{50, []int{40, 50, 1001, 1234213}},
		{-3, []int{-6, -4, -3, 0, 10, 11}},
	}

	for _, tc := range tests {
		testname := fmt.Sprintf("finding,%v,in,%v", tc.value, tc.sl)
		t.Run(testname, func(t *testing.T) {
			found := BinarySearch(tc.value, tc.sl)
			if found != true {
				t.Errorf("Failed to find")
			}
		})
	}

}

func TestInvalid(t *testing.T) {

	var tests = []struct {
		value int
		sl    []int
	}{
		{1, []int{0}},
		{3, []int{0, 1, 2}},
		{-1, []int{0, 1, 2}},
		{15, []int{0, 10, 20}},
		{5, []int{0, 10, 20, 30}},
		{301, []int{0, 100, 200, 300}},
		{1002, []int{40, 50, 1001, 1234213}},
		{-9, []int{-6, -4, -3, 0, 10, 11}},
	}

	for _, tc := range tests {
		testname := fmt.Sprintf("finding,%v,in,%v", tc.value, tc.sl)
		t.Run(testname, func(t *testing.T) {
			found := BinarySearch(tc.value, tc.sl)
			if found != false {
				t.Errorf("Found something I didn't want to find")
			}
		})
	}

}
