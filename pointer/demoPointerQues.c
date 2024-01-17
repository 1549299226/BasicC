#include <stdio.h>
#include <string.h>

int main()
{
    //指针和字符串
    char* ptr = "hello world";

    //Q1字符串常量：什么叫字符串常量
    //1.打印字符串中的每一个字符
    //way1:使用for循环的方式
#if 0
    int len = strlen(ptr);
    printf("len:%d\n",len);
    char p ='0'; 
    for(int idx = 0; idx < strlen(ptr) ; idx++)
    {
       p = *ptr;

       printf("%c , idx:%d\n", p,idx);
       ptr++;
       printf("strlen:%ld\n",strlen(ptr));
    }
#elif 0
    //实现方式一
    int len = strlen(ptr);
    printf("len:%d\n",len);
    char p ='0'; 
    for(int idx = 0; idx < len ; idx++)
    {
       p = *ptr;

       printf("%c , idx:%d\n", p,idx);
       ptr++;
    }
#else 0

    while (*ptr != '\0')
    {
        printf("%c\t".*ptr);
        ptr++;
    }
    printf("\n")
#endif
    return 0;
}