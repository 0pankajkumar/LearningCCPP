/*
Chapter 2
H.
(h). Checking sum of squares of sine & cosine of an angle in degrees
By Pankaj Kumar
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double angle;
	printf("Enter angle in degrees: ");
	scanf("%lf",&angle);

	double pi = acos(-1);
	angle = angle*pi/180; //converting angle in radians

	double one = ((sin(angle)*sin(angle))+(cos(angle)*cos(angle)));

	if(one == 1)
	{
		printf("Sum of squares of sine & cosine of an angle in degrees is ONE\n");
	}
	printf("One is %lf\n",one);

	return 0;
}