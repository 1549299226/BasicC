#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5
#define ROW 3
#define COLUMN 4

int main()
{
#if 1
    //从一维数组到二维数组
#if 0
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len:%d\n",len);
#endif
    

    //二维数组定义
    int array2[ROW][COLUMN] = {0};
    int len = sizeof(array2);
    printf("len:%d\n",len);

    int count = 1;
    //给二维数组赋值
    array2[0][0] = 100;
    

    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++; 
        }
    }

#if 0
      count = 0;
    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d]=%d\t",idx,jdx,array2[idx][jdx]);
            count++;
            if(count % 3 == 0)
            {
                printf("\n");
            }
        }

    }
    //printf("array2[0][0]:%d\n",array2[0][0]);
    //二维数组的取值
   //printf("array2[0][0]:%d\n",array2[0][0])
#endif
#endif 

    //二维数组的地址
    printf("array2[0]:%p\n",array2[0]);
    printf("array[0][0]:%p\n",&array2[0][0]);
    printf("array + 0:%p\n",array2);
    printf("\n");
    printf("array2[1]:%p\n",array2[1]);
    printf("array[1][0]:%p\n",&array2[1][0]);
    printf("array + 1:%p\n",array2 + 1);
    printf("\n");

    printf("array2[2]%p\n",array2[2]);
    printf("array[1][0]:%p\n",&array2[1][0]);
    printf("array + 2:%p\n",array2 + 2);
    printf("\n");
    
    // array2[0];
    // array2[1];
    // array2[2];

    printf("array2[2][2]=%d,*(*(array2 + 2 )+ 2)=%d\n",array2[2][2],*(*(array2 + 2) + 2));

    //数组及指针
  
    //作业：二维数组的翻转
   return 0;


}