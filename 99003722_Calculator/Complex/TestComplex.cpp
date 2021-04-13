#include "Complex.h"
#include <gtest/gtest.h>
TEST(complex,DefaultConstructor) 
{
    complex<int> T1;
    complex<int> T2;
    complex<int> T3;
    EXPECT_EQ((10,0),T1.(T2.complex(10,0)+T3.complex(10,0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}