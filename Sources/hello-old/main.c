#include <stdio.h>
#include <stdlib.h>

void saludar(char * name)
{
	printf("hello, %s!\n", name);
}

void saludar_n(char * name, int times)
{
	int i;
	for (i=0; i<times; i++) {
		printf("%d: hello, %s!\n", i, name);
	}
}

int main(int argc, char** argv)
{
	saludar_n("world", 3);
	return EXIT_SUCCESS;
}

