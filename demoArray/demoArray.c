#include <stdio.h>
#include <string.h>
//数组：
    //1.一段连续的存储空间
    //2.存放的是同一种数据类型

#define BUFFER_SIZE 10

int main()
{
    //初始化
    //方法一：使用定义初始化
    //
    #if 0
    int array[BUFFER_SIZE]={0};
    #else
    int array[BUFFER_SIZE];
    #endif

    #if 0
    for (int idx = 0; idx < BUFFER_SIZE ; idx++)
    {
        printf("array[%d]=%d\n",idx,array[idx]);
    }
    #else
    int len = sizeof(array);
    // printf("len:%d\n",len);
    // printf("%p\n",array);
    // printf("%p\n",&array[0]);
    // printf("%p\n",&array[1]);
    // printf("%p\n",&array[9]);
    // printf("%p\n",&len);
    printf("============\n");
    memset(array,0,sizeof(array));
      for (int idx = 0; idx < BUFFER_SIZE ; idx++)
    {
        printf("array[%d]=%d\n",idx,array[idx]);
    }
    //二进制
    //八进制
    //十进制   
    //十六进制 0x
    //数组的地址就是数组首元素的地址
   #endif
    return 0;
}