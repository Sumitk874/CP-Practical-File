#include <stdio.h>

int main() {
    struct address {
        char streetno[20];
        char city[20];
        char district[20];
        char state[10];
    };
    struct emp {
        char emp_name[20];
        int emp_age;
        char emp_degree[20];
        float emp_exp;
        struct address emp_add;
    };
    struct emp data[20];
    int i;
    char que;
    for (i = 0; i < 1; i++)
    {
        printf("Enter The name of employee : ");
        scanf("%s", &data[i].emp_name);
        printf("Enter The age of employee : ");
        scanf("%d", &data[i].emp_age);
        printf("Enter degree of employee : ");
        scanf("%s", &data[i].emp_degree);
        printf("Enter experience of employee: ");
        scanf("%f", &data[i].emp_exp);
        printf("Enter address of employee : \n ");
        scanf("%s", &data[i].emp_add.streetno);
        scanf("%s", &data[i].emp_add.city);
        scanf("%s", &data[i].emp_add.district);
        scanf("%s", &data[i].emp_add.state);
    }
    for (i = 0; i < 1; i++)
    {
        printf("The name of employee is %s \n", data[i].emp_name);
        printf("The age of employee is %d \n", data[i].emp_age);
        printf("The degree of employee is %s \n", data[i].emp_degree);
        printf("The experience of employee is %f \n", data[i].emp_exp);
        printf("The address of employee \n");
        printf("streetno : %s \n", data[i].emp_add.streetno);
        printf("City : %s \n", data[i].emp_add.city);
        printf("District : %s\n", data[i].emp_add.district);
        printf("State : %s\n", data[i].emp_add.state);
        printf("\n");
    }
    return 0;
}