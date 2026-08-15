#pragma once

namespace r_algo {
	namespace util {
		template <typename T>
		constexpr void swap(T& a, T& b) {
			T temp = std::move(a);
			a = std::move(b);
			b = std::move(temp);
		}
	}
}