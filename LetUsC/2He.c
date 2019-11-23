/*
Chapter 2
H.
(e). Add 1 to each digit of number. eg. input 12345 will yield 23456
By Pankaj Kumar
*/

#include<stdio.h>

int main()
{
	int num, notes = 0;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);

	int holder = 0, revNum = 0, divi = 10000;

	//Adding one but number gets reversed
	while(num > 0)
	{
		holder = num % 10;
		if(holder+1 >= 10)
		{
			holder = -1;
		}
		revNum += ((holder+1) * divi);
		divi /= 10;
		num /= 10;
	}
	//printf("num: %d\n",revNum );

	//Reversing the number to get correct order
	num = revNum;
	holder = 0; 
	revNum = 0;
	divi = 10000;

	while(num > 0)
	{
		holder = num % 10;
		revNum += ((holder) * divi);
		divi /= 10;
		num /= 10;
	}

	printf("Required number is %d\n", revNum);
	return 0;
}