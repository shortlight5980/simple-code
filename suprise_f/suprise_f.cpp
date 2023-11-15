#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[10] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("电脑将在1分钟内关机，如果你是小狗，请输入：“Yes”就取消关机！\n请输入>:");
    scanf("%s", input);
    if (0 == strcmp(input, "Yes"))
    {
        system("shutdown -a");
        printf("取消成功，修勾:-)");
    }
    else
    {
        goto again;
    }
    system("pause");
    return 0;
}
