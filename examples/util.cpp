#include<r_algo/r_algo.hpp>
#include<iostream>


int main() {
	int a = 5;
	int b = 10;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	r_algo::util::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	return 0;
}




