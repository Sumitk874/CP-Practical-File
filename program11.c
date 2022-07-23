#include <stdio.h>

long pascalTriangle(int, int);

int main() {
   int n = 0;
   int m = 0;
   int k = 0;
   int s = 0;
   printf ("Enter number of rows:\n");
   scanf("%d", &n);

   for(k = 0; n >= k; k++) {
            for(s = 0; s < n-k; s++) 
                    printf(" ");
            for(m = 0; k >= m; m++) {
                    long f = pascalTriangle(k, m);
                    printf("%ld ", f);
            }
            printf("\n");
    }
    return 0;
}

long pascalTriangle(int n, int i) {
        if(n == i || i == 0)
                return 1;
        else
                return pascalTriangle(n-1, i) + pascalTriangle(n-1, i-1);
}

