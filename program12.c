#include <stdio.h>
#include <string.h>

 
int main()
{
    FILE* ptr;
    char chr;
    ptr = fopen("test.txt", "r");
    chr = fgetc(ptr);
    while (chr != EOF)
    {
        printf("%c", chr);
        chr = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}


