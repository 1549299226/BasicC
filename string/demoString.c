#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE16 32
#define BUFFER_SIZE

int main()
{
#if 0
    //字符数组
    char array[5];
    memset(array , 0 , sizeof(array));
    for (int idx = 0; idx < BUFFER_SIZE16; idx++)
    {
        array[idx]= idx;
    }

#endif

#if 0
    char array[BUFFER_SIZE16]="hello world";
    int len = sizeof(array);
    printf("len:%d, array:%s\n",len,array);


#endif

#if 0
    char array1[BUFFER_SIZE16] = "hello world";
    int len = strlen(array1);
    printf("len:%d\n",len);
    
    char name[BUFFER_SIZE16];
    memset(name , 0 , sizeof(name));
    
    strcpy(name , "zhangsan");
    printf("name:%s\n",name);
    
    strcat(name , "is a boy" );
    printf("name:%s",name);

    char name2[BUFFER_SIZE16]="wangwu";
    memset(name2,0,sizeof(name2));
    int ret = strcmp(name,name2);
#endif  

#if 1
    //字符串
    //指针出入
    char* ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);
    
    printf("len:%d\n",len);
    printf("size:%d\n",size);
    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n",*ptr,*(ptr+1),ptr);


    *(ptr+1)= 'H';
     printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n",*ptr,*(ptr+1),ptr);

#endif
    return 0;
}