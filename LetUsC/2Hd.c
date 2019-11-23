/*
Chapter 2
H.
(d). Get minimum notes from a denomination of 100,50,10,5,2,1 notes
By Pankaj Kumar
*/

#include<stdio.h>

int main()
{
	int num, notes = 0;
	printf("Enter amount of money: ");
	scanf("%d",&num);

	while(num > 0)
	{
		if(num >= 100)
		{
			notes++;
			num -= 100;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else if(num >= 50)
		{
			notes++;
			num -= 50;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else if(num >= 10)
		{
			notes++;
			num -= 10;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else if(num >= 5)
		{
			notes++;
			num -= 5;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else if(num >= 2)
		{
			notes++;
			num -= 2;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else if(num >= 1)
		{
			notes++;
			num -= 1;
			//printf("notes:%d , num:%d\n", notes,num);
		}
		else
		{
			num = 0;
		}
	}

	printf("Minimum notes are %d\n", notes);
	return 0;
}