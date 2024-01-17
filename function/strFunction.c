#include "strFunction.h"
#include <stdlib.h>

int myLen(const char* str)
{
    int count = 0;

    if (str == NULL)
    {
        return count;
    }
    
    int len = sizeof(str);
    
    if (str[len]=='\0')
    {
        len--;
    } 
    return len;
}

char myCpy(char* str1 , const char* str2)
{
    char* cptr1 = (char*)malloc(myLen(str2) + 1);
    char* cptr2 = (char*)malloc(myLen(str2) + 1);

       if(cptr2 == NULL)
    {
        return 0;
    }

    cptr1 = cptr2;

      if(cptr2 == NULL)
    {
        return 0;
    }

    return * cptr1;
    
}

char* myCat(char* str1, const char* str2)
{
    if(str1 == NULL || str2 == NULL)
    {
        exit(1);
    }
 
    int len1 = myLen(str1);
    int len2 = myLen(str2);
    int clen = (len1+len2+1);
 
    * str = (char* )malloc(clen + 1);
 
    for(int idx = 0; idx < clen; clen++)
    {
        if(idx < len1)
        {
            str[idx] = str1[idx];
        }
        else if(idx >= len1 && idx < clen)
        {
            str[idx] = str2[idx];
        }
        else
        {
            str[idx] = '\0';
        }
        
    }

    return str;
}

int myCmp(const char* str1,const char* str2)
{
    char* ptr1;
    char* ptr2;

    int plen1 = myLen(ptr1);
    int plen2 = myLen(ptr2);
    int plen;
    
    if(plen1 > plen2)
    {
        plen = plen1;
    }
    else
    {
        plen = plen2;
    }
    
    for(int idx = 0; idx < plen; idx++)
    {
        if(ptr1[idx] != ptr2[idx])
        {
          int result = ptr1[idx] - ptr2[idx];
          return result;
        }
        
    }
}