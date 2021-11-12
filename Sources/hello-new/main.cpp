#include <stdio.h>
#include <stdlib.h>

extern "C" {
	void saludar(const char * name);
}

void saludar(const char * name)
{
	printf("hello, %s!\n", name);
}

int main(int argc, char** argv)
{
	saludar("world");
	return EXIT_SUCCESS;
}

