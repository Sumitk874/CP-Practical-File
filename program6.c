#include <stdio.h>
#include <string.h>

int main()
{
    int x, i, average = 0;
    printf("How many employee's age do you want to enter :");
    scanf("%d", &x);
    int emp[x];
    for (i = 1;i <= x;i++)
    {
        printf("Enter age of Employee %d : ", i);
        scanf("%d", &emp[i]);
        average = average + emp[i];
    }
    average = average / x;
    printf("The average age of Employees is %d\n", average);
    return 0;
}


