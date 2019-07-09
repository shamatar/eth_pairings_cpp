//
//  arithmetics.hpp
//  eth_pairings
//
//  Created by Alexander on 09/07/2019.
//  Copyright © 2019 Alexander. All rights reserved.
//

#ifndef arithmetics_hpp
#define arithmetics_hpp

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
#include <stdint.h>
#include <stdio.h>

#define uint128_t __uint128_t

std::uint64_t adc(const std::uint64_t a,
                  const std::uint64_t b,
                  std::uint64_t *carry)
{
    uint128_t tmp = uint128_t(a) + uint128_t(b) + uint128_t(*carry);
    
    *carry = std::uint64_t(tmp >> 64);
    
    return std::uint64_t(tmp);
}


#endif /* arithmetics_hpp */
