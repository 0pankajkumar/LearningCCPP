/*
Chapter 2
H.
(b). Reverse a Five digit number
By Pankaj Kumar
*/

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);

	int holder = 0, revNum = 0, divi = 10000;

	while(num > 0)
	{
		holder = num % 10;
		revNum += (holder * divi);
		divi /= 10;
		num /= 10;
	}
	printf("Reverse number: %d\n", revNum);
	return 0;
}