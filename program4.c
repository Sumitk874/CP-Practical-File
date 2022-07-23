#include <stdio.h>
int main()
{
    int x, y, i, n;
    printf("How many students name do you want to store : \n");
    scanf("%d", &x);
    printf("How many subjects do you want to store : \n");
    scanf("%d", &y);
    int student[x][y];
    for (i = 0;i < x;i++)
    {
        for (n = 0;n < y;n++)
        {
            printf("Enter Marks of %d student in %d Subject : ", i + 1, n + 1);
            scanf("%d", &student[i][n]);
        }
    }
    printf("\n\n");

    for (i = 0;i < x;i++)
    {
        for (n = 0;n < y;n++)
        {
            printf("The marks of student %d in %d subject are : %d\n", i + 1, n + 1, student[i][n]);
        }
        printf("\n");
    }
    
    return 0;
}

