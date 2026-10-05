#include <gtest/gtest.h>
#include <r_algo/sort.hpp>
#include <list>
#include <string>

TEST(MergeSortTest, SortsArrayCorrectly) {
	std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };
	std::vector<int> expected = { 1, 2, 5, 5, 6, 9 };
	r_algo::mergeSort(arr.begin(), arr.end());
	EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, SortsEmptyArray) {
	std::vector<int> arr = {};
	std::vector<int> expected = {};
	r_algo::mergeSort(arr.begin(), arr.end());
	EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, SortsString) {
	std::string str{"apple"};
	std::string expect{"aelpp"};
	r_algo::mergeSort(str.begin(), str.end());
	EXPECT_EQ(str, expect);
}