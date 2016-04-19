#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 3)
		exit(EXIT_FAILURE);

	int a = strtol(argv[1], NULL, 10);
	int b = strtol(argv[2], NULL, 10);

	printf("%d\n", a + b);

	return EXIT_SUCCESS;
}
