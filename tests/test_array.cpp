#include <gtest/gtest.h>
#include <r_algo/r_algo.hpp>

TEST(ArrayMakeUniqueTest, MakesIntVectorUnique) {
    std::vector<int> arr = { 0,0,1,1,1,2,2,3,3,4 };
    std::vector<int> expected = { 0,1,2,3,4 };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesStringVectorUnique) {
    std::vector<std::string> arr = { "apple", "apple", "banana", "banana", "cherry" };
    std::vector<std::string> expected = { "apple", "banana", "cherry" };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesEmptyVectorUnique) {
    std::vector<int> arr = {};
    std::vector<int> expected = {};

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesSingleElementVectorUnique) {
    std::vector<int> arr = { 42 };
    std::vector<int> expected = { 42 };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesAllElementsUnique) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesAllElementsSameUnique) {
    std::vector<int> arr = { 7, 7, 7, 7, 7 };
    std::vector<int> expected = { 7 };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}

TEST(ArrayMakeUniqueTest, MakesNegativeElementsUnique) {
    std::vector<int> arr = { -3, -3, -2, -1, -1, 0 };
    std::vector<int> expected = { -3, -2, -1, 0 };

    int uniqueSize = r_algo::makeUnique(arr.begin(), arr.end());
    arr.erase(arr.begin() + uniqueSize, arr.end());

    EXPECT_EQ(arr, expected);
}
