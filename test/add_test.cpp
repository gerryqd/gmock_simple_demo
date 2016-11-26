#include "gmock/gmock.h"

extern "C"
{
#include "add.h"
}

TEST(add, simple_test)
{
    ASSERT_THAT(3, ::testing::Eq(add(1, 2)));
}
