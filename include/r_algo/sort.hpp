#pragma once
#include <vector>
#include <iterator>


namespace r_algo {
	/// <summary>
	/// Merges two array for merge sort
	/// </summary>
	/// <typeparam name="Iter"></typeparam>
	/// <param name="start"></param>
	/// <param name="Mid"></param>
	/// <param name="end"></param>
	template <typename Iter>
	void merge(Iter start, Iter mid, Iter end) {
		using valueType = typename std::iterator_traits<Iter>::value_type;
		std::vector<valueType> temp;
		Iter left = start, right = mid;

		while (left != mid && right != end) {
			if (*left < *right) {
				temp.push_back(*left);
				left++;
			}
			else {
				temp.push_back(*right);
				right++;
			}
		}

		while (left != mid) {
			temp.push_back(*left);
			left++;
		}

		while (right != end) {
			temp.push_back(*right);
			right++;
		}

		std::copy(temp.begin(), temp.end(), start);

	}
	/// <summary>
	/// Sort the array using merg sort
	/// </summary>
	/// <typeparam name="Iter"></typeparam>
	/// <param name="begin"></param>
	/// <param name="end"></param>
	template <typename Iter>
	void mergeSort(Iter begin, Iter end) {
		if (end - begin <= 1)
			return;

		Iter mid = begin + (end - begin) / 2;

		mergeSort(begin, mid);
		mergeSort(mid, end);
		merge(begin, mid, end);
	}
}