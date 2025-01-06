#include <stdio.h>
#define MIN_PER_HOU 60

int main(int argc, char * argv[])
{
    int hours, minutes, input;
    printf("CONVERT MINUTERS TO HOURS!\n");
    printf("PLEASE INPUT THE NUMBER OG MINUTERS( <=0 TO QUIT):");
    scanf("%d", &input);
    while(input > 0)
    {
        hours = input / MIN_PER_HOU;
        minutes = input % MIN_PER_HOU;
        printf("CONVERT TO %d HOUR AND %d MINUTERS\n", hours, minutes);
        printf("PLEASE CONVER INPUT THE NUMBER OF MINUTERS( <= 0 TO QUIT ):");
        scanf("%d", &input);
    }
    printf("PROGRAM EXIT!\n");
    return 0;
}