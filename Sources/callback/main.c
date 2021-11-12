#include <stdio.h>
#include <stdlib.h>

void saludar(void)
{
	printf("hello, world!\n");
}

void usuario_del_callback(int veces, void (*ptr_func)())
{
	int i;
	for (i=0; i<veces; i++)
	{
		ptr_func();
	}
}

int main (int argc,char** argv)
{
	usuario_del_callback(7, saludar);
	return EXIT_SUCCESS;
}

