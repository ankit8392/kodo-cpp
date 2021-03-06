// Copyright Steinwurf ApS 2014.
// Distributed under the "STEINWURF RESEARCH LICENSE 1.0".
// See accompanying file LICENSE.rst or
// http://www.steinwurf.com/licensing

#include <kodocpp/kodocpp.hpp>

#include <gtest/gtest.h>

#include "test_helper.hpp"

TEST(test_on_the_fly_codes, invoke_api)
{
    using namespace kodocpp;

    if (has_codec(codec::on_the_fly) == false)
        return;

    uint32_t max_symbols = rand_symbols();
    uint32_t max_symbol_size = rand_symbol_size();

   test_basic_api(codec::on_the_fly, max_symbols, max_symbol_size);
}
