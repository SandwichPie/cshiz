#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Please enter a number: ");

	char string[256];
	int c, i = 0;

	while((c = getchar()) != '\n' && c != EOF && i <= 255) {
		string[i++] = c;
	}
	string[i] = '\0';

	int a = strtol(string, NULL, 10);

	i = 0;

	printf("Please enter another number: ");

	while((c = getchar()) != '\n' && c != EOF && i <= 255) {
		string[i++] = c;
	}
	string[i] = '\0';

	int b = strtol(string, NULL, 10);

	printf("%d\n", a + b);

	return 0;
}

