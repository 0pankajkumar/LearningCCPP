/*
Chapter 2
H.
(a). Five digit number is input calculate sum of digit
By Pankaj Kumar
*/

#include<stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter a 5 digit number: ");
	scanf("%d",&num);

	int divi = 10000;
	for(int i=num; i > 0; i = i % divi, divi /= 10)
	{
		sum += ((i - (i % divi)) / divi);
	}
	printf("Sum is %d\n", sum);
	return 0;
}