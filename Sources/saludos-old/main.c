#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc,char ** argv)
{
	char nombre[1];
	char mensaje[1];
	printf("como te llamas: ");
	//fflush(stdout);
	scanf("%s", nombre);
	strcpy(mensaje, "hola, ");
	strcat(mensaje, nombre);
	strcat(mensaje, "!");
	printf("%s\n", mensaje);
	return EXIT_SUCCESS;
}

