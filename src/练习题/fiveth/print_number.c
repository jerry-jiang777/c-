#include <stdio.h>
#define SCOPE 10

int main()
{
    int input, target;
    printf("输入一个数字,然后打印大于该数字的后10个数字( 输入 0 TO Quit):\n");
    scanf("%d", &input);
    while(input)
    {
        target = input + SCOPE;
        for(int i = input; i <= target; i++)
        {
            printf("%d\n", i);
        }
        printf("可以继续输入数字,我来打印...(0 To Quit!)");
        scanf("%d", &input);
    }
    return 0;
}