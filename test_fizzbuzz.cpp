#include "stdafx.h"

BOOST_AUTO_TEST_SUITE(FIZZBUZZ)

BOOST_AUTO_TEST_CASE(FIZZBUZZ_NotDiv3or5ShouldReturnIt)
{
    BOOST_ASSERT_MSG(fizzbuzz(1) == 1, "1=>1");
    BOOST_ASSERT_MSG(fizzbuzz(2) == 2, "2=>2");
    BOOST_ASSERT_MSG(fizzbuzz(4) == 4, "4=>4");
    BOOST_ASSERT_MSG(fizzbuzz(7) == 7, "7=>7");
    BOOST_ASSERT_MSG(fizzbuzz(8) == 8, "8=>8");
    BOOST_ASSERT_MSG(fizzbuzz(11) == 11, "11=>11");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_Div3ShouldReturnFizz)
{
    BOOST_ASSERT_MSG(fizzbuzz(3) == -1, "3=>Fizz");
    BOOST_ASSERT_MSG(fizzbuzz(6) == -1, "6=>Fizz");
    BOOST_ASSERT_MSG(fizzbuzz(9) == -1, "9=>Fizz");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_Div5ShouldReturnBuzz)
{
    BOOST_ASSERT_MSG(fizzbuzz(5) == -2, "5=>Buzz");
    BOOST_ASSERT_MSG(fizzbuzz(10) == -2, "10=>Buzz");
}

BOOST_AUTO_TEST_SUITE_END()
