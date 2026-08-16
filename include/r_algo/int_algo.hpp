#pragma once

namespace r_algo {
    /// @brief this namespace for int related algos
    namespace intAlgo {
        /// @brief Counts the number of digits
        /// @param number 
        /// @return number of digits
        constexpr int countDigits(int number) {
            int count = 0;
            while (number != 0) {
                number /= 10;
                count++;
            }
            return count;
        }

        /// @brief Reverse a number and returns it
        /// @param number Number to be reverse
        /// @return the reversed number
        constexpr int reverseNumber(int number) {
            int reversedNumber = 0;
            while (number != 0) {
                reversedNumber *= 10;
                reversedNumber += number % 10;
                number /= 10;
            }
            return reversedNumber;
        }

        /// @brief Checks if number is a palindrome
        /// @param number 
        /// @return return true if palindrome else false
        constexpr bool isPalindrome(int number) {
            return r_algo::intAlgo::reverseNumber(number) == number;
        }
    }
}