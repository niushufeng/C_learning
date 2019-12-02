#include "stdio.h"//10的阶乘
int main()
{
    int i=2,n=10;
    float fac=1;
    while (i<=n) {
    fac=fac*i;
    i++;
        /* code */
    }
    printf("factorial of %d is : %.2f\n",n,fac );
    return 0;
}

