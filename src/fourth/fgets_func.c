#include<stdio.h>

int main()
{
    char buffer[100];
    printf("Enter a line: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        printf("You entered: %s", buffer);
    }
    else
    {
        printf("Error or EOF encountered.\n");
    }
    return 0;
}