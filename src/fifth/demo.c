#include <stdio.h>

int main(void)
{
    int guests = 0;
    while (guests++ < 10)  //这是一个完成的表达式，因为他是while的循环测试条件,所以该表达式的结束就是一个序列点,因此c保证再执行pritf()之前发生副作用，即递增guests
    {
        printf("%d \n", guests);
    }
    return 0;
}