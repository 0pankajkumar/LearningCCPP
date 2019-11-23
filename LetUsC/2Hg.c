/*
Chapter 2
H.
(g). Convert cartesian coordinates into polar coordinates
By Pankaj Kumar
*/

#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	printf("Enter cartesian coordinates: ");
	scanf("%lf%lf",&a, &b);

	double r = sqrt(a*a+b*b);
	double phi = atan(b/a);

	printf("r=%lf units, phi=%lf radians\n",r,phi);

	return 0;
}