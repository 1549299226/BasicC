#include <stdio.h>

#define BUFFER_SIZE 10
int main()
{
#if 0

    //如何获取数组的总元素，数组总长度/每个元素的长度
    char array[BUFFER_SIZE] = { 0 }
    int arrayLen = sizeof(array);
    printf("len:%d\n",len);

    int elemenLen = sizeof(array[0]);
    printf("len:%d\n",elemenlen);

    int length = arrayLen / elemenLen;
    printf("length : %d\n",length);
#endif

//字符数组
#if 0
    char pNum = 'a';
    printf("pNum:%c\n",pNum);

    //只要是指针的变量，变量定义第一个需要以p开头
    char * ptr ="hello world";
    printf("ptr:%s\n",ptr);

    char buffer[]={'h','e','l','l','o','w','o','r','l','d'};
    int buflen = sizeof(buffer);
    printf("buflen:%d\n,buffer:%s\n",buflen);
#endif
    //字符数组初始化定义的两种方式
    char buffer1[] ="hello world";
    //如果是以双引号（字符串）的方式 默认结尾加上 \0，
    //如果是以单引号（字符）的方式 默认不会加上 \0
   
    char buffer2[]={'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[]={'h','e','l','l','o','w','o','r','l','d'};
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);


    printf ("&buflen:%p \n, bufflen2:%p\n,bufflen3:%p\n",buffer1,buffer2,buffer3);
    printf ("buflen:%d , bufflen2:%d\n",buffer1,buffer2);

    printf ("buffer1 = %s \nbuffer2 = %s\n buffer3 =%s",buffer1,buffer2,buffer3);

    return 0;
}