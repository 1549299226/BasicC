#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"
#include "strFunction.h"

//函数参数：可以没有 也可以有
//函数返回值：可以有也 可以没有
    //没有的情况需要写void
    //如果有，返回你想返回的数据类型{ int | char | short | float |double }
    //什么叫API：Application 
    //函数的定义
#if 0
//case1：没有参数，没有返回值

void purchaseAppointThing()
{
    printf("purchase a phone\n")

}
#endif
#if 0
//case2：有参数没有返回值
//  函数的参数一定有数据类型
void myAddNum1(int num1,int num2)
{
    int sum = num1 +num2;
    printf("sum:%d\n",sum);
}
//case3：有参数有返回值
int myAddNum2(int num1,int num2)
{
    int sum = num1 +num2;
    printf("sum:%d\n",sum);
    return sum;
}
#endif


//枚举 它也是一种数据类型

typedef enum STATUS_CODE 
{
    ON_SUCCESS,
    ON_EROR,
    ON_NULLPTR,
    ON_MALLOCFAIL
} STATUS_CODE;
//取别名
#if 0
typedef enum STATUS_CODE STATUS_CODE; //
#endif

void printStr()
{
    printf("hello world\n");

}

int main()
{   
#if 0
    // int a = 5;
    // printf("a:%d\n",a);
    //函数的调用
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;

    //函数的使用
    myAddNum1(num1,num2);
    int totalSum = myAddNum2(num1,num2);
    int transFormersPrice = 10;
    if (totalSum>transFormersPrice)
    {
        printf("get a transFormer");
    }
    else
    {
        printf("I not get");
    }
#endif
#if 0
    STATUS_CODE status;
    int len = sizeof(status);
    printf("len :%d",len);
#endif
#if 0
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1,num2);
    printf("sum:%d\n",sum);

    int num3 = calculatesub(num1,num2);
    printf("sum:%d\n",num3);

    int amass = calculateMul(num1,num2);
    printf("sum:%d",amass);

    int num4 = calculateDiv(num1,num2);
    printf("sum:%d",num4);

    char *ptr = "hello\0 world";
    printf("len:%d\n",myLen(ptr));
    printf("len:%d\n",strlen(ptr));
#endif 

    int choice = 0;
    //函数指针就是钩子函数，主要用在回调函数中
    
    void(*func)()= printStr;
    func();

    if (choice == 1)
    {
        printStr();
    }
    
    return 0 ; 

}