#include "stdio.h"
int leap(int a)
{
    if(a % 4 == 0 && a % 100 !=0 || a % 400 == 0)//判断瑞年
        return 1;
    else
        return 0;
}

int number(int year,int m,int d)
{
    int sum = 0, i,j,k,a[12]=
    {
    31,28,31,30,31,30,31,31,30,31,30,31
    };
    int b[12] =
    {
    31,29,31,30,31,30,31,31,30,31,30,31
    };
    if (leap(year) == 1) {
            for (size_t i = 0; i < m - 1; i++) {
                /* code */
                sum +=b[i];
            }
        }
        /* code */
    else
        { 
            for (size_t i = 0; i < m - 1; i++) {
             /* code */
             sum +=a[i];
            }
        }
        sum += d;
        return sum;
}
   
int main(int argc, char const *argv[]) 
{
    int year,month,day,n;
    printf("请输入年月日\n" );
    scanf("%d %d %d\n",&year,&month,&day );
    n = number(year,month,day);
    printf("第%d天\n",n );
    return 0;
}
