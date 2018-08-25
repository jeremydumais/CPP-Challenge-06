#include <gtest/gtest.h>
#include "../include/abundant.h"

using namespace std;

int main(int argc, char**argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(getDivisors, Number1_Get1Divisor)
{
    auto actual = abundantHelper::getDivisors(1);
    ASSERT_EQ(actual.size(), 1);
    ASSERT_EQ(actual[0], 1);
}

TEST(getDivisors, Number4_Get2Divisors)
{
    auto actual = abundantHelper::getDivisors(4);
    ASSERT_EQ(actual.size(), 2);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
}

TEST(getDivisors, Number10_Get3Divisors)
{
    auto actual = abundantHelper::getDivisors(10);
    ASSERT_EQ(actual.size(), 3);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 5);
}

TEST(getDivisors, Number12_Get5Divisors)
{
    auto actual = abundantHelper::getDivisors(12);
    ASSERT_EQ(actual.size(), 5);
    ASSERT_EQ(actual[0], 1);
    ASSERT_EQ(actual[1], 2);
    ASSERT_EQ(actual[2], 3);
    ASSERT_EQ(actual[3], 4);
    ASSERT_EQ(actual[4], 6);
}

TEST(getAbundance, Number1_Return1)
{
    ASSERT_EQ(abundantHelper::getAbundance(abundantHelper::getDivisors(1)), 1);
}

TEST(getAbundance, Number4_Return3)
{
    ASSERT_EQ(abundantHelper::getAbundance(abundantHelper::getDivisors(4)), 3);
}

TEST(getAbundance, Number10_Return8)
{
    ASSERT_EQ(abundantHelper::getAbundance(abundantHelper::getDivisors(10)), 8);
}

TEST(getAbundance, Number12_Return16)
{
    ASSERT_EQ(abundantHelper::getAbundance(abundantHelper::getDivisors(12)), 16);
}