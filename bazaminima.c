#include <stdio.h>

int main()
{
	unsigned short n; int x, i, cifmax = 0;

	scanf("%hu", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);

		while (x) {
			if (x%10 > cifmax) cifmax = x%10;
			
			x /= 10;
		}
	}

	printf("%d", cifmax + 1);

	return 0;
}

// scor 100
