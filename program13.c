#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char f[100];
    printf("Enter filename : ");
    scanf("%s", f);
    fp = fopen(f, "r+");
    if (fp == NULL)
    {
        printf("Error");
    }
    else
    {
        while (1)
        {
            int n;
            printf("\n1.Read\n2.Write\n3.Exit\n");
            printf("Enter your choice : ");
            scanf("%d", &n);
            char a[50];
            char ch;
            switch (n)
            {
                {
                case 1:
                    while (!feof(fp))
                        ch = fgetc(fp);
                    printf("%c", ch);
                }
                break;
                case 2:
                printf("Enter string : ");
                scanf("%s", &a);
                int b = strlen(a);
                for (int i = 0; i < b; i++)
                {
                    int c = strcmp(a, "$");
                    if (c != 0)
                    {
                        fputc(a[i], fp);
                    }
                }
                printf("Successfully written\n");
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Wrong Choice!\n");
                break;
            }
        }
    }
}

