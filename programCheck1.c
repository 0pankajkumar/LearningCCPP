#include<stdio.h>

void str(char *s)
{
	//if(!*s)
	{
		str(s+1);
		str(s+1);
		printf("%s", *s);
	}
}

void main()
{
	str("xyz");
}
