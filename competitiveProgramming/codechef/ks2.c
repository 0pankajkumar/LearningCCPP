#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	int cases;
	scanf("%d", &cases);
	
	for(int i = 0; i < cases; i++)
	{
		unsigned long n;
		scanf("%d", &n);
	
		unsigned long number = 19;

		unsigned long ans = number + (9 * (n - 1));
		printf("%d\n", ans);
	}
	return 0;
}

