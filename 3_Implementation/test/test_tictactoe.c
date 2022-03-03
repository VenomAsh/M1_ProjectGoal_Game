#include "tictactoe.h"
#include "unity.h"
void setUp()
{

}
void tearDown()
{

}
void testcheckwin(void)
{
    TEST_ASSERT_EQUAL_INT(125.000000,testcheckwin(2,3));
}
void testboard(void)
{
    TEST_ASSERT_EQUAL_INT(125.000000,testboard(2,3));
}
int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(testcheckwin);
    RUN_TEST(testboard);
    return UNITY_END();
}