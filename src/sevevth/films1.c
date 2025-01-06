#include <stdio.h>
#include <string.h>
#define TSIZE 45 //存储片名的数组大小
#define FMAX 5 //影片的最大数量

struct film {
    char title[TSIZE];
    int rating;
};

char * s_gets(char str[], int lim);

int main()
{
    struct film movies[FMAX];
    int i = 0;
    int j;
    puts("Enter first movie title:");
    while (i < FMAX && s_gets(movies[i].title   ))
}