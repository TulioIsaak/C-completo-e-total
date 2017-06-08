#include <stdio.h>

search (char *p[], char *name);

void main (void) {
	char *string = "test do que eu consigo fazer";
	printf("%s\n", string);

	search (string, "eu");

}

search (char *p[], char *name) {
	register int t;

	for (t = 0; p[t]; ++t) {
		if (!strcmp (p[t], name))
		{
			return t;
		}
	}
	return -1;
}