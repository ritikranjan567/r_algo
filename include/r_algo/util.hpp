#pragma once

#include <utility>
#include <iterator>

namespace r_algo {
	namespace util {

		/// @brief Swaps two elements
		/// @tparam Take two objects that needs to be swapped
		/// @param a first element
		/// @param b second element
		template <typename T>
		constexpr void swap(T& a, T& b) {
			T temp = std::move(a);
			a = std::move(b);
			b = std::move(temp);
		}

		/// @brief Reverses elements in range [begin, end)
		/// @tparam Iter Must satisfy BidirectionalIterator requirements
		/// @param begin Iterator to start of range
		/// @param end Iterator to end of range (not included)
		/// @note Requires iterators to support operator++, operator--, and dereferencing
		template <typename iter>
		constexpr void reverse(iter begin, iter end) {
			while (begin != end && begin != --end) {
				r_algo::util::swap(*begin, *end);
				++begin;
			}
		}

		/// @brief Check if array sorted
		/// @tparam iter Must satify BidirectionalIterator requirements and support ++ and --
		/// @param begin iterator start range
		/// @param end iterator end range
		/// @param desc set true to check if array is sorted in decending order (optional; Default: false)
		/// @return boolean true/false
		template <typename iter>
		constexpr bool isSorted(iter begin, iter end, bool desc = false) {
			// check for empty
			if (begin == end) return true;

			// check for single element
			if (begin == end - 1) return true;

			for (iter elem = begin; elem != end - 1; elem++) {
				if (desc && *elem < *(elem + 1)) return false;
				else if (!desc && *elem > *(elem + 1)) return false;
			}

			return true;

		}
	}
}