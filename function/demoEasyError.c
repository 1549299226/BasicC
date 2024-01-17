#include <stdio.h>
#include <string.h>

#if 1
        //值传递和地址传递
        //函数参数又叫形参
        //当函数的参数没有指针的时候就是值传递，要想改变实参的值就要地址传递
    void swapData(int val1,int val2)
    {
        int tmp = val1;
        val1 = val2;
        val2 = tmp;

        return;
    }
    //当整数做形参的时候，一定是传出参数

    void swapRealData(int *pval1,int *pval2)
    {
        int tmp = *pval1;
        *pval1 = *pval2;
        *pval2 = tmp;
    }
#endif


#if 1
        //什么叫传入参数
        //什么时候用传入参数：当你不想改变实参的时候，就用传入参数（就用const限制）

        void printStr(const char *str)
        {
            printf("before str:%s\n",str);
            //*str = *(str + 0) = str[0]
            //*str = 'H';
            printf("after str:%s\n",str);

            return;
        }


#endif 

// 结论
 //字符串：形参不加const就是传出参数（就是要被修改的值）  加上const就是传入参数（不能被改变）
    //整数：加上指针就是传出参数（就是要被修改的值）  不加指针就是传入参数（能被修改，不影响实参）

int main()
{
#if 0
    int num1 = 100;
    int num2 = 200;
    //调用函数参数又叫实参

    //传出参数一定会改变实参的值，要想改变实参的值就要用传出参数
    swapData(num1,num2);
    printf("num1:%d\tnum2=%d\n",num1,num2);
    
    swapRealData(&num1, &num2);
    printf("num1:%d\tnum2:%d\n",num1,num2);
    
#endif    
#if 0    //
    char* str = "hello world";
    printStr(str);
#endif
    return 0;
}