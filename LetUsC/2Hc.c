/*
Chapter 2
H.
(c). Get sum of first & last digit of a Four digit number
By Pankaj Kumar
*/

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);

	int sum = 0;

	sum += num%10;

	while(num > 10)
	{
		num /= 10;
	}

	sum += num;

	printf("Required sum is %d\n", sum);

	return 0;
}