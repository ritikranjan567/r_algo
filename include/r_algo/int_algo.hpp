#pragma once
#include <cmath>

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

        /// @brief Finds the gcd of two numbers
        /// @param a
        /// @param b
        /// @return GCD/HCF of two numbers
        constexpr int gcd(int a, int b) {
            int big = std::max(a, b), small = std::min(a, b);

            while (small != 0) {
                int r = big % small;
                big = small;
                small = r;
            }

            return big;
        }

        /// <summary>
        /// Check if the number is prime
        /// </summary>
        /// <param name="number">Number to check for</param>
        /// <returns>true if numebr is prime else false</returns>
        constexpr bool isPrime(unsigned int number) {
            if (number <= 1) return false;

            unsigned int root = sqrt(number);
            for (unsigned int i = 2; i <= root; i++) {
                if (number % i == 0) return false;
            }

            return true;
        }

        /// <summary>
        /// Returns the first n numbers
        /// </summary>
        /// <param name="number"></param>
        /// <returns>sum upto number</returns>
        constexpr int sumFirstNnumbers(int number) {
            return (number * (number + 1)) / 2;
        }
    }
}