/*
Swapping using pointers
*/
#include<stdio.h>

int swap(int *, int *); //Function declaration

void main() //Main function
{
	int a = 4, b = 9;
	
	printf("Before\na = %i \n", a);
	printf("b = %i", b);
	swap(&a, &b);
	printf("After\na = %i \n", &a);
	printf("b = %i", &b);

}

int swap(int *a, int *b) //Function definition
{
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}