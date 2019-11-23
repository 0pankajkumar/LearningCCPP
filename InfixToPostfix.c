#include<stdio.h>
#include<conio.h>
int main()
{
    char *p = "3+5/9";
    char *cur = p;
    char *cur2 = p;
    
    while(*cur)
    {
        //printf("%c",*cur);
        if((*cur) == '/' || (*cur) == '*')
        {
            
        }
        else if(*cur == '+' || *cur == '-')
        {
            *cur = 's';
            /*
            printf("Inside + -\n");
            char temp = *cur;
            ++cur;
            *cur = temp;
            */
            
        }
        
        ++cur;
    }
    
    while(*cur2)
    {
        printf("%c",*cur2);
        ++cur2;
    }
    
    return 0;
}