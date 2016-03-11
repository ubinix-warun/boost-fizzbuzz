#include "stdafx.h"

BOOST_AUTO_TEST_SUITE(FIZZBUZZ)

BOOST_AUTO_TEST_CASE(FIZZBUZZ_1ShouldReturn1)
{
    BOOST_ASSERT_MSG(fizzbuzz(1) == 1, "1=>1");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_2ShouldReturn2)
{
    BOOST_ASSERT_MSG(fizzbuzz(2) == 2, "2=>2");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_3ShouldReturnFizz)
{
    BOOST_ASSERT_MSG(fizzbuzz(3) == -1, "3=>Fizz");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_4ShouldReturn4)
{
    BOOST_ASSERT_MSG(fizzbuzz(4) == 4, "4=>4");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_5ShouldReturnBuzz)
{
    BOOST_ASSERT_MSG(fizzbuzz(5) == -2, "5=>Buzz");
}

BOOST_AUTO_TEST_CASE(FIZZBUZZ_6ShouldReturnFizz)
{
    BOOST_ASSERT_MSG(fizzbuzz(6) == -1, "5=>Fizz");
}

BOOST_AUTO_TEST_SUITE_END()
