#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fp;
	fp = fopen ("/tmp/jackfile.txt", "w+");
	fprintf (fp, "Poo");
	char buff[255];
	fscanf (fp, "%s", buff);
	fclose (fp);

	getchar ();

	return EXIT_SUCCESS;
}
