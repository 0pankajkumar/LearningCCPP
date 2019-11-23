//Made for submission at codeforces
//by Pankaj Kumar
/*
Program to abbrevate very long words ( > 10 alphabets)using a notation
eg: "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n"
*/

#include <stdio.h>
#include <conio.h>
  
int main()
{
	int n;
	//n = getchar();

	scanf("%d",&n);

	while(n >= 0)
	{
		char s[50];
		gets(s);

		char *finger = s;
		int count = 0;

		while(*finger)
		{
			count++;
			finger++;
		}

		if(count > 10)
		{
			printf("very long\n");
		}
		else
		{
			printf("short\n");
		}

		n--;
	}

	return 0;
}