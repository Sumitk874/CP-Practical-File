#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the number a and b\n");
    scanf("%d %d",&a, &b);
    if(b != 0){
        c = a/b;
        printf("The quotient is %d\n",c);
    } else {
        printf("Division by 0 detected\n");
    }
}