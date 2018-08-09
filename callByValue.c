/*
Call By value - Swapping using pointers
*/
#include<stdio.h>

void swap(int x, int y); //Function declaration

void main() //Main function
{
	int a = 4, b = 9;
	
	printf("Before\na = %i \n", a);
	printf("b = %i", b);
	swap(a, b);
	printf("\n- - - - - - - - - -\n");
	printf("After\na = %i \n", a);
	printf("b = %i", b);

}

void swap(int x, int y) //Function definition
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}