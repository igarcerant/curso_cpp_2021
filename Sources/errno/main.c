#include <stdio.h>

int main(int argc,char ** argv)
{
	FILE * fp = fopen(argv[1],"r");
	if (fp) {
		printf("abierto con exito\n");
		fclose(fp);
	} else {
		perror(argv[0]);
	}
	return 0;
}


