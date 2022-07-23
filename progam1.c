#include<stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("The number %d after left shift by 1 is = %d\n",number,(number<<1));
    printf("The number %d after right shift by 1 is = %d \n",number,(number>>1));

    printf("Output if entered number is multiplied by 1(left shift):%d\n", (number*2));
    printf("Output if entered number is divided by 1(right shift):%d\n", (number/2));
}

