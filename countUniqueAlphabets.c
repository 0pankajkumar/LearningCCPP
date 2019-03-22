/******************************************************************************
Counts ubique alphabets of a string (only small case)
*******************************************************************************/
#include <stdio.h>
int main()
{
    char *str = "aabbbcddddd";
    char alpha = 'a';
    char *t = str;
    
    int count = 0;
    
    int a[26] = {0};
    
    while(*t != '\0')
    {
        int temp = *t;
        //printf("Hello %d",temp);
        int temp2 = temp -97;
        
        a[temp2] = 1;
        
        t++;
    }
    
    int *u = a;
    
    while(*u)
    {
        if(*u == 1)
        {
            count++;
        }
        ++u;
    }
    
    
    
    printf("Hello World %d",count);

    return 0;
}
