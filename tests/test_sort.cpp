#include <gtest/gtest.h>
#include <r_algo/sort.hpp>
#include <list>

TEST(MergeSortTest, SortsArrayCorrectly) {
	std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };
	std::vector<int> expected = { 1, 2, 5, 5, 6, 9 };
	r_algo::mergeSort(arr.begin(), arr.end() - 1);
	EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, SortsEmptyArray) {
	std::vector<int> arr = {};
	std::vector<int> expected = {};
	r_algo::mergeSort(arr.begin(), arr.end() - 1);
	EXPECT_EQ(arr, expected);
}