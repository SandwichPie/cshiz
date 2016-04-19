#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	clock_t t;
	srand((unsigned) time(&t));
	for (int i = 0; i < 10; i++)
	{
		printf ("%d\n", rand () % 12);
	}

	return 0;
}
