#include <stdio.h>
#include <unistd.h>

void test(int *testp, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d, ", testp[i]);
}

int main(int argc, char **argv)
{
	for (int i = 0; i < 999999999; i++)
		test((int []){1, 2, 3, 4, 9, 8, 7, 6}, 8);
	sleep(8);
	return 0;
}
