#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str);
    char *ptr;
    ptr = str;
    int len = 0;
    for (int i =0;*ptr!='\0';i++){
        len++;
        ptr++;
    }
    printf("The length of the entered string is %d\n", len);
}

