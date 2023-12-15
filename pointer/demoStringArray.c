#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10
int main()
{
#if 0
    //一块连续的存储空间
    //数组存储的是一块相同的数据类型
    // int aray[BUFFER_SIZE]//整型数组
    // char array[BUFFER_SIZE]//字符数组
    // char *array[BUFFER_SIZE]字符串数组
    //todo...结构体数组


    //字符数组放在栈区
    char name[BUFFER_SIZE];
    memset(name , 0 ,sizeof(name));

    strncpy(name, "zhangsan",sizeof(name)-1);
    printf("name:%s\n",name);

    printf("name[1]:%c\n",name[1]);
    name[1]='H';  //可以修改
    // 指针和数组不分家
    printf("*(name + 2):%c\n",*(name + 2));

    *(name + 2) = 'A'; //也可以改
    printf("name:%s\n",name);


    //1.指针和数组是不分家的，name[X] = *(name + X)  X是整数


#endif
#if 0
    //字符串：内存在全局（常量）区
  char* ptr = "zhangsan";
  printf("ptr[1]:%c\n",ptr[1]);
//ptr[1] = *(ptr + 1)

  printf("*(ptr+2):%c\n",*(ptr + 2));

  ptr[0] = 'Z';
  printf("ptr:%c",ptr[0]);

//conclusion
//字符数组和字符串的区别：
//1.内存：字符数组内存存放在栈区，存储值可以修改
    //字符串内存存放在全局区，不可被修改

#endif  

#if 1

    //字符串数组
    char* array[BUFFER_SIZE] ;
    memset(array, 0 , sizeof(array));
    array[0] = "hello";
    array[1] ="world";
    array[2] ="nihao";
    array[3] ="zhangsan";
    array[4] ="china";

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n",idx,array[idx]);
    }

    //字符串数组
        // 1.他是一个数组
        // 2.存放的是字符串
    printf("array[%d] = %s\n",array[0][0]);
#endif

return 0;
}