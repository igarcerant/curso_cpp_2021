#include <stdio.h>
#include <setjmp.h>

jmp_buf ctx;

int main (int argc,char ** argv)
{
	int ret;
	printf("hello, world!\n");
	ret = setjmp(ctx);
	if (ret == 0) {
		printf("todos dentro del try\n");
		printf("ahora hacemos el throw\n");
		longjmp(ctx,11);
		printf("dado que llamamos a longjmp(), nunca vamos a ver este mensaje\n");
	} else {
		printf("hemos hecho un salto no local\n");
		printf("ret = %d\n", ret);
	}
	printf("todo ha finalizado\n");
	return 0;
}



