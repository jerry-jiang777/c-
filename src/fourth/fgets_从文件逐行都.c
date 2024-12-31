#include<stdio.h>

int main()
{
    FILE * file = fopen("demo.txt", "r");
    if(file == NULL)
    {
        printf("cloud not open file.\n");
        return 1;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)){
        printf("Line from file: %s", buffer);
    }
    fclose(file);
    return 0;

}