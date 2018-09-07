#include<stdio.h>

int x = 10;
void p(int);
void main()
{
	p(x);
	printf("%i",x);
}

void p(int a)
{
	if(a <= 40)
	{
		a = a + 10;
		p(a);
		x = a + 10;
	}
}