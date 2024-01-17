#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
#define BUFFER_OFFSET 97
//函数
#if 0

    
//函数参数
    //需求：实现两个数的交换
    void swapData(int val1, int val2)  // 值传递
    {
        int tmpdata = val1;
        val1 = val2;
        val2 = tmpdata;

        printf("after:val1:%d\tval2:%d\n",val1,val2);
    }

void swapRealData(int val1, int val2)  // 值传递
    {
        int ret;
        int tmpdata = val1;
        val1 = val2;
        val2 = tmpdata;

        printf("after:val1:%d\tval2:%d\n",val1,val2);
    }

void swapData(int val1, int val2)  // 值传递
    {
        int tmpdata = val1;
        val1 = val2;
        val2 = tmpdata;

        printf("after:val1:%d\tval2:%d\n",val1,val2);
    }

#endif 
//数组做函数参数会自动弱化为指针
void printArray(int *array,int numSize)
{
    //int elementNum = sizeof(array)/sizeof(array[0]);
    for (int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d\t",idx, array[idx]);
    } 
    printf("\n");
    return ;
}
int main()
{
//     int num1 = 100;
//     int num2 = 200; 
//     printf("num1:%d,num2:%d\n",num1,num2);
 #if 0  
    int val1 = num1;
    int val2 = num2;

    val1 = 200;
    val2 = 666;

    swapData(num1 , num2);
   
    printf("val1:%d,val2:%d\n",val1,val2);
#endif
#if 0

    int a = 5;
    int *p = &a;

    *p = 200;
    printf("a = %d\n",a);
    swapRealData(&num1,&num2);



#endif 


#if 1

    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array))
    int elementNum = sizeof(array)/sizeof(array[0]);//
    printf("len:%d\n",elementNum);

    for (int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    } 

    printArray(array,elementNum);//数组名就是数组的首地址，也是数组首元素的地址
    
#endif 

    return 0;
}