/*
This program simply shows assignment in pointers.
You can't assign values to pointer variables directly like p = 45 or *p = 45
This will cause to warning as your program will start referencing values out of bounds to it.
*/
#include<stdio.h>
void main()
{
    int *p;
    int q = 43;
    p = &q;
    printf("\n*p = %i", (*p));
    printf("\np = %i", (p));
    printf("\n&p = %i", (&p));
    printf("\n&q = %i", (&q));
}