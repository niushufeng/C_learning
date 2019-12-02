#include "stdio.h"
//----------------3个数由小到大排列--------------------
int main(int argc, char const *argv[]) {
        int a,b,c,t;
        printf("Please input a,b,c:\n" );
        scanf("%d %d %d\n",&a,&b,&c );
        if (a>b) {
            t=a;a=b;b=t;//交换
            /* code */
        }

        if (a>c) {
            t=a;a=c;c=t;
            /* code */
        }
        if (b>c) {
            t=b;b=c;c=t;
            /* code */
        }
        printf("%d,%d,%d\n",a,b,c );

    return 0;
}
