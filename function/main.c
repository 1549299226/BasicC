#include <stdio.h>
#include "strFunction.h"
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

int main()
{
    char str1[BUFFER_SIZE] ="nihao";
    char str2[BUFFER_SIZE] ="hei";

    // char* str = strcpy(str1,str2);
    // printf("str:%s str1:%s str:%s\n",str,str1,str2);
    int len = myLen(str1);
    printf("len:%d\n",len);
    
    //printf("%d\n",myCpy(str1,str2));
    //printf("str:%s str1:%s str:%s\n",str,str1,str2);
    
    char * str3 = myCat(str1,str2);
    printf("%s",str1);
    //char str
    return 0;
}