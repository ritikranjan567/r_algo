#pragma once

#include <iterator>

namespace r_algo {
    /// @brief moves unqiue elements to the front, and return size of the unique array in a non decending array
    /// @tparam iter 
    /// @param begin 
    /// @param end 
    /// @return size of the unique element array
    template <typename iter>
    constexpr int makeUnique(iter begin, iter end) {
        if (begin == end) return 0;
        
        iter i = begin, j = begin + 1, k = begin + 1;
        int count = 1;

        while(i != end && j != end && k != end) {
            if (*i == *j) {
                ++j;
                continue;
            }
            *k++ = *j;
            i = j;
            j++;
            count++;
        }
        return count;
    }
    
}