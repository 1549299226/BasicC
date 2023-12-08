#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    //数据类型对应的是存储空间
//     int age = 6;
//     int len = sizeof(age);
//     printf("len= %d,a=%d\n",len,age);//打印出整数
//     printf("hello world!");
//     short smallValue = 1;
//     len = sizeof(smallValue);
//     printf("len= %d,smallValue=%d\n",len,smallValue);
    
//     long bigValue =0;
//     len = sizeof(smallValue);
//     printf("len= %d,bigValue=%ld\n",len,bigValue);
  
//     int condition1 = 1;
//     int condition2 = 6;

//     if ((condition1 == 1) || (condition2 == 5))
//     {
//         printf("hello world\n");
        
//     }
//     else 
//     {
//         printf("not hello world\n");
//     }


// //&& 同时满足两个条件为1否则为0
//     if ((condition1 == 1) && (condition2 == 5))
//     {
//         printf("hello world\n");
        
//     }
//     else 
//     {
//         printf("not hello world\n");
//     }


// #if 0
//     float weight =50.5; //浮点型
//     len = sizeof(weight);
//     printff("len= %d,weight=%f\n",len,weight);
// #else
//     double  weight = 50.5;
//     len = sizeof(weight);
//     printf("len= %d,weight=%f\n",len,weight);
// #endif
//     // char sex ='m';
//     // len =sizeof(sex);
//     // printf("len =%d,sex =%c ",len,sex);
    
//     char sex = 65;
//     len = sizeof(sex);
//     printf("len :%d , sex = %c sex = %d\n",len , sex ,sex);
    
//     // unsigned m_value = -1;
//     // len =sizeof(m_value);
//     // printf("len =%d,m_value =%c , m_value=%d ",len,m_value,m_value);

//     char default_value =137;
//     len = sizeof(default_value);
//     printf("len : %d, default_value = %c default_value= %d",len,default_value,default_value);

//     unsigned m_value = -1;
//     len =sizeof(m_value);
//     printf("len =%d,m_value =%c , m_value=%d ",len,m_value,m_value);
    
//     int val = 10;
//     printf("val:%d",val);
//     val ++;
//     printf("val:%d",val);
//     val --;
//     printf("val:%d",val);
//     //前置++
//     ++ val;
//     printf("val:%d",val);
//     -- val;
//     printf("val:%d",val);

//     val +=100;
//     printf("val:%d",val);
//     val = val + 100;
//     printf("val:%d",val);
    
//     int randomVal = rand();
//     printf("randomVal: %d\n",randomVal);
    
//     int lotteryRate =randomVal % 4;
//     printf("lotteryRate:%d\n",lotteryRate);
    
//     int a=51;
//     a << 1;
//     printf("a = %d",a);

//     printf("\a\a\a\a");

    //双目运算符  &三目运算符
    int num1 = 10;
    int num2 = 30;
    int num3 = (num1 >num2) ? 100 : 666;
    printf(" num3 = %d\n ", num3);


    return 0;
}