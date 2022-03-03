#include "tictactoe.h"
#include "unity.h"
void setup()
{

}
void tearDown()
{

}
void checkwin(void)
{
    TEST_ASSERT_EQUAL_INT(1,checkwin(2));
}
void board(void)
{
    TEST_ASSERT_EQUAL_INT(1,board(2));
}
int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(checkwin);
    RUN_TEST(board);
    return UNITY_END();
}