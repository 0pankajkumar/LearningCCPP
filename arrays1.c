#include<stdio.h>
void main()
{
	char s1[7] = "1234", *p;
	//p = s1 + 2;
	*p = *s1;
	printf("%s\n", *(s1 + 2));
    printf("%c\n", p);
}