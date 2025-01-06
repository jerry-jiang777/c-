#include <stdio.h>
#define BOOK "War and Peace"

int main()
{
    float coast = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, coast); //c中的双引号转义序列 \"   %号的转义序列 %%
    printf("That is %.0f%% of list.\n", percent);
    return 0;
}