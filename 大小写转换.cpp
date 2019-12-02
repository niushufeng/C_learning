#include "stdio.h"
void change(char *a);//转换函数
int main()
{
    char a[20];
    printf("please input string \n");
    scanf("%s",&a);
    getchar();
    change(a);
    return 0;
}

void change(char *a)
{
    int i = 0;
    for (; a[i] != '\0'; ++i)
    {
        if (a[i] >= 'a' && a[i] <= 'z')//判断
        {  
            a[i] -= 32;        
        }
        else
        {   
            a[i] += 32;
        }
    }
        for(i=0;a[i]!='\0';++i)
        {
            printf("%c",a[i]);//输出
        }
        printf("\n");
    
}
