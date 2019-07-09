//
//  representation.hpp
//  eth_pairings
//
//  Created by Alexander on 09/07/2019.
//  Copyright © 2019 Alexander. All rights reserved.
//

#include <cassert>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <ostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#ifndef representation_hpp
#define representation_hpp

#include "arithmetic.hpp"
#include <stdio.h>
template <std::size_t N>
class SizedRepresentation
{
private:
    std::array<std::uint64_t, N> _repr;
    
public:
    void add_nocarry(const SizedRepresentation<N>& other) {
        std::uint64_t carry = 0;
        
        for( std::size_t i = 0; i < N; i++) {
            _repr[i] = adc(_repr[i], other.repr[i], &carry);
        }
        
    };
//    void sub_noborrow(const SizedRepresentation<N>& other) {
//        
//    }
};

typedef SizedRepresentation<4> U256Repr;
typedef SizedRepresentation<5> U320Repr;

#endif /* representation_hpp */
