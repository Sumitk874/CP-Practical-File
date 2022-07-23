#include<stdio.h>

int main(){
    int a,b,result;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a, &b);
    printf("%d & %d is %d\n",a,b,a&b);
    printf("%d | %d is %d\n",a,b,a|b);
    printf("%d ^ %d is %d\n",a,b,a^b);
    printf("~%d is %d\n", b, ~b);
    printf("~%d is %d\n", a, ~a);
}

