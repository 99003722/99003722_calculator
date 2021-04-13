#include"Calculator.h"
#include <gtest/gtest.h>
TEST(add,integer) 
{
     operation<int> c1;
     EXPECT_EQ(4,c1.add(1,3));
     
}
TEST(add,floating)
{
    operation<float> c2;
    EXPECT_EQ((float)4.5,c2.add(1.5,3));
}
TEST(subtract,integer)
{
     operation<int> c3;
     EXPECT_EQ(2,c3.subtract(5,3));
     
}
TEST(subtract,floating)
{
    operation<float> c4;
    EXPECT_EQ((float)-1.5,c4.subtract(1.5,3));
}
TEST(multiply,integer)
{
    Calculator<int> c5;
     EXPECT_EQ(15,c5.multiply(5,3));
     
}
TEST(multiply,floating)
{
    Calculator<float> c6;
    EXPECT_EQ((float)5.25,c6.multiply(1.5,3.5));
}
TEST(division,floating)
{
    Calculator<float> c6;
    EXPECT_EQ((float)5.25,c6.mul(1.5,3.5));
}