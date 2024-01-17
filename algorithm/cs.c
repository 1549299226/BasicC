#include <stdio.h>


int main ()
{
    int target;
    int diff;
    int array [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printf("Please input a number: \n");
    scanf("%d", &target);
    for (int idx1 = 0; idx1 < 10; idx1++ )
    {
    if (target == array[idx1])
    {
        for (int idx2 = 0; idx2 < 10; idx2++)
        {
            if(array[idx2] == 0)
        {
            printf("This two numbers are %d and %d\n", idx1, idx2);
        }else
            {
                 continue;
            }
        }
    } else if (target < array[idx1] )
 {
             continue;

         }else
        {
         diff = target - array[idx1];
             for (int idx2 = 0; idx2 < 10; idx2++)
            {
            if(array[idx2] == diff)
            {
            printf("This two numbers are %d and %d\n", idx1, idx2);
            }
            }
         }
printf("Those two numbers don't exist!");       
            }
}