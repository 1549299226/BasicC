#include "calculateFunc.h"

//源文件（.c）是函数的实现
//状态码
//加法


typedef enum STATUS_CODE 
{
    ON_SUCCESS,
    ON_EROR =-5, 
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS
} STATUS_CODE;



int calculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}
   
//减法
int calculatesub(int num1, int num2)
{
    return num1 - num2;
}
//乘法
int calculateMul(int num1, int num2)
{
    int amass = num1 * num2;
}
//除法
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}

