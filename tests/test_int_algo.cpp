#include<gtest/gtest.h>
#include<r_algo/int_algo.hpp>
// Test suit for Int algos

TEST(CountDigitsTest, ReturnsNumberOfDigits) {
    EXPECT_EQ(r_algo::intAlgo::countDigits(123), 3);
}

TEST(ReverseNumberTest, ReturnsReversedNumber) {
    EXPECT_EQ(r_algo::intAlgo::reverseNumber(1234), 4321);
}

TEST(IsPalindromeTest, ReturnsIfNumberPalindrome) {
    EXPECT_FALSE(r_algo::intAlgo::isPalindrome(1212));
    EXPECT_TRUE(r_algo::intAlgo::isPalindrome(121));
}