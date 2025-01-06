#include <stdio.h>


void min(int x, int y);

int main()
{
    printf("请输入两个数字,我帮你比较这两个数字的大小!\n");
    int a;
    int b;
    printf("请输入第一个数字: ");
    scanf("%d", &a);
    printf("请输入第二个数字: ");
    scanf("%d", &b);
    printf("您一共输入两个数字,分别是 %d 和 %d,现在我来帮你对比两个数字的大小...\n", a, b);
    printf("比较结果如下:\n");
    min(a, b);

    return 0;
}

void min(int x, int y)
{
    if(x > y)
    {
        printf("较小的数是: %d", y);
    }
    else
    {
        printf("较小的数是: %d",x);
    }
}