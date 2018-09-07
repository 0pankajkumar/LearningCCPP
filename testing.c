#include<stdio.h>

void fun(int n)
{
	if(n > 0)
	{
		fun(--n);
		printf("%d ", n);
		fun(--n);
	}
}

void main()
{
	int a = 3;
	fun(a);
	printf("\n");
	
}