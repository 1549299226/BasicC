#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 20

int main()
{
    #if 0
        //1.指针怎么定义
        //基础数据类型
        //建议定义变量任意初始化
        int a = 0;
        long b = 0;
        
        //指针的定义
        int* p = NULL;
        

    #endif

    #if 0
         //指针的使用 指针内部存放的是某变量的地址
         //一级&二级指针
         int a = 5;
         int* p = &a;

         printf("a:%d\n",a);
         printf("a:%p\n",&a);


         printf("*p = %d\n",*p);
         printf("p:%p\n", p);

         printf("%p\n", &p);

         printf("%d\n",*(&a));
#if 0
        //
        //  int *ptr = &p;
        //  printf("p:%p\n", p);

        int **ptr = &p;
        printf("ptr:%p\n",ptr);
        printf("*ptr:%p\n",*ptr);
        

        //非常非常重要
        printf("*(*ptr):%d\n",*(*ptr));

        int ***pptr = &ptr;

        //***pptr==pptr
        //**pptr==*pptr== &ptr
        //*pptr==**pptr== &p
        //pptr==***pptr== a
        printf("***pptr:%p\n",pptr);
        printf("**pptr:%p\n",*pptr);
        printf("*pptr:%p\n",**pptr);
        printf("pptr:%d\n",***pptr);
#endif
#endif
#if 0
        //指针的特性:指针占用的内存大小是8个字节（64位操作系统）
        
        //如果是32位的操作系统指针占用的内存大小是4个字节
        int a = 10;
        int len = sizeof(a);
        printf("len:%d\n",len);

        char p = 97;
        len = sizeof(p);
        printf("len:%d\n",len);

        char* ptr = &p;
        printf("%c\t%d\n",*ptr,*ptr);
        
        len = sizeof(ptr);

        int* ptrInt = &a;
        printf("%d",*(&a));
        printf("%d",*ptrInt);

        len = sizeof(ptrInt);
        printf("len:%d\n", len);

        
        
#endif
#if 1
 //指针特性2：指针和字符串
    char* ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len:%d\n",len);

//1:怎么获取字符串长度
    printf("%d\n", *ptr1);
    int length = strlen(ptr1);
    printf("length:%d\n",length);
//2:字符数组赋值
    char name[BUFFER_SIZE] = {0};
    strcpy(name,"zhangsan");
    //  name = "zhangsan";
    printf("name:%s\n",name);    

//3：字符串赋值

    char* ptr2 = NULL;
    ptr2 = "zhangsan";
    printf("ptr2:%s\n",ptr2);
    //非法地址
    strcpy(ptr2,"zhangsan");
#endif
#if 0
    //堆空间
    //void* 是一个指针，这个指针被称为万能指针
    char *ptr =(char *) malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr,"zhangsan");
    printf("ptr:%s\n",ptr);
#endif

    return 0;
}