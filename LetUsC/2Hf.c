/*
Chapter 2
H.
(f). Area of triangle when sides are given; using heron's formula
By Pankaj Kumar
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter sides of triangle: ");
	scanf("%d%d%d",&a, &b, &c);

	int s = (a+b+c)/2;

	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f unit square\n",area);

	return 0;
}