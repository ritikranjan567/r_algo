#include <gtest/gtest.h>
#include <r_algo/util.hpp>

TEST(UtilSwapTest, SwapTwoIntegers) {
	int tempA = 3, tempB = 5, a = 3, b = 5;

	r_algo::util::swap(a, b);
	EXPECT_TRUE(tempA == b && tempB == a);
}