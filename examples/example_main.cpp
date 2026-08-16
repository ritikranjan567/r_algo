#include<r_algo/r_algo.hpp>
#include<iostream>
#include<vector>

#define PRINT_VECTOR(vec) \
			for (const auto& element : vec) { \
				std::cout << element << " "; \
			} \
			std::cout << "\n";
int main() {
	int a = 5;
	int b = 10;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	r_algo::util::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

	std::vector<int> arr{1, 2, 3, 4, 5, 6};
	std::cout << "Vector before reverse:" << std::endl;
	PRINT_VECTOR(arr);
	r_algo::util::reverse(arr.begin(), arr.end());
	std::cout << "Vector after reverse:" << std::endl;
	PRINT_VECTOR(arr);

	std::cout << "Reverse of 1234 is: " << r_algo::intAlgo::reverseNumber(1234)
		<< std::endl;

	return 0;
}




