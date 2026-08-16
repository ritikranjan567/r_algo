#include <gtest/gtest.h>
#include <r_algo/util.hpp>
#include <string>
#include <vector>

TEST(UtilSwapTest, SwapTwoIntegers) {
	int tempA = 3, tempB = 5, a = 3, b = 5;

	r_algo::util::swap(a, b);
	EXPECT_TRUE(tempA == b && tempB == a);
}

TEST(UtilSwapTest, SwapTwoChars) {
	char tempA = 'a', tempB = 'b', a = 'a', b = 'b';
	r_algo::util::swap(a, b);
	EXPECT_TRUE(tempA == b && tempB == a);
}

TEST(UtilSwapTest, SwapTwoStrings) {
	std::string apple{"apple"}, ball{"ball"}, tApple{"apple"}, tBall{"ball"};
	r_algo::util::swap(apple, ball);
	EXPECT_TRUE(tApple == ball && tBall == apple);
}

TEST(UtilReverseTest, ReverseNativeArray) {
    char arr[] = {'a', 'b', 'c', 'd', 'e'}; // Odd length
    
    // std::begin and std::end automatically deduce the array size
    r_algo::util::reverse(std::begin(arr), std::end(arr));

    char expected[] = {'e', 'd', 'c', 'b', 'a'};
    for (size_t i = 0; i < 5; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(UtilReverseTest, ReverseVector) {
    std::vector<int> vec = {1, 2, 3, 4}; // Even length tests your crossover logic
    
    r_algo::util::reverse(vec.begin(), vec.end());

    // GoogleTest's EXPECT_EQ natively supports std::vector equality checks
    std::vector<int> expected = {4, 3, 2, 1};
    EXPECT_EQ(vec, expected);
}

TEST(UtilReverseTest, ReverseString) {
    std::string text = "Algorithm";
    
    r_algo::util::reverse(text.begin(), text.end());

    EXPECT_EQ(text, "mhtiroglA");
}

TEST(UtilReverseTest, ReverseStringArray) {
    std::string arr[] = {"apple", "banana", "cherry"};

    r_algo::util::reverse(std::begin(arr), std::end(arr));

    std::string expected[] = {"cherry", "banana", "apple"};
    for (size_t i = 0; i < 3; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(UtilReverseTest, ReverseStringVector) {
    std::vector<std::string> vec = {"apple", "banana", "cherry"};

    r_algo::util::reverse(vec.begin(), vec.end());

    std::vector<std::string> expected = {"cherry", "banana", "apple"};
    EXPECT_EQ(vec, expected);
}

TEST(UtilReverseTest, HandlesEmptyAndSingleElement) {
	// Empty range
    std::vector<int> empty_vec;
    r_algo::util::reverse(empty_vec.begin(), empty_vec.end());
    EXPECT_TRUE(empty_vec.empty());

    // Single element
    std::string single_char = "Z";
    r_algo::util::reverse(single_char.begin(), single_char.end());
    EXPECT_EQ(single_char, "Z");
}

TEST(UtilIsSorted, HandlesEmptyArray) {
	std::vector<int> empty_vec;
	EXPECT_TRUE(r_algo::util::isSorted(empty_vec.begin(), empty_vec.end()));
}

TEST(UtilIsSorted, HandlesSingleElement) {
	std::vector<int> vec{2};
	EXPECT_TRUE(r_algo::util::isSorted(vec.begin(), vec.end()));
}

TEST(UtilIsSorted, WorksForNativeArray) {
	char arr[] = { 'a', 'b', 'c', 'd', 'e' };
	EXPECT_TRUE(r_algo::util::isSorted(arr, arr+5));
}

TEST(UtilIsSorted, VectorCheckAsc) {
	std::vector<char> cVec{'a', 'b', 'c', 'd', 'e', 'f'};
	EXPECT_TRUE(r_algo::util::isSorted(cVec.begin(), cVec.end()));
}

TEST(UtilIsSorted, VectorCheckDesc) {
	std::vector<char> cVec{'e', 'd', 'c', 'b', 'a'};
	EXPECT_TRUE(r_algo::util::isSorted(cVec.begin(), cVec.end(), true));
}

TEST(UtilIsSorted, VectorShouldFailNotSorted) {
	std::vector<char> cVec{'a', 'f', 'c', 'g', 'e', 'f'};
	EXPECT_FALSE(r_algo::util::isSorted(cVec.begin(), cVec.end()));
}

TEST(UtilIsSorted, WorksForStringArray) {
	std::string arr[] = {"apple", "banana", "cherry", "date"};
	EXPECT_TRUE(r_algo::util::isSorted(arr, arr + 4));
}

TEST(UtilIsSorted, WorksForStringVector) {
	std::vector<std::string> vec = {"apple", "banana", "cherry", "date"};
	EXPECT_TRUE(r_algo::util::isSorted(vec.begin(), vec.end()));
}