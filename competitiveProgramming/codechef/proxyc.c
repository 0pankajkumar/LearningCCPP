#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float percentage(char *strr, int length)
{
    int a = 0, p = 0;
    //char *s = &strr;
    
    for(int i = 0; i < strlen(strr); i++)
    {
        if(strr[i] == 'A')
        {
            a++;
        }
        if(strr[i] == 'P')
        {
            p++;
        }
    }
    float per = p / length;
    
    return per;
}
int main(void) {
	
	int cases;
	scanf("%d", &cases);
	
	for(int i = 0; i < cases; i++)
	{
	    int length;
	    scanf("%d", &length);
	    
	    char strr[length];
	    scanf("%[^\n]s", strr);
	    int count = 0;
	    
	    for(int j = 0; j < length; j++)
	    {
	        printf("Inside loop \n");
	        if(percentage(strr, length) >= 0.75)
	        {
	            break;
	        }
	        int min = 2;
	        int max = length - 1;
	        if(j >= 2 && j <= length - 2)
	        {
	            if((strr[j+1] == 'P' || strr[j+2] == 'P') && (strr[j-1] == 'P' || strr[j-2] == 'P'))
    	        {
    	            strr[j] = 'P';
    	            count++;
    	        }
	        }
	        printf("%s", strr);
	        
	    }
	    printf("%d", count);
	}
	return 0;
}

