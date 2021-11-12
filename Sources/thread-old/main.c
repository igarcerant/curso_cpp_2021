#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void * function(void * arg)
{
	const char * name = (const char*)arg;
	printf("hello, %s!\n", name);
	return NULL;
}

int main(int argc,char ** argv)
{
	void * retval;
	pthread_t th1;
	pthread_create(&th1, NULL, function, "world");
	pthread_join(th1, &retval);
	return EXIT_SUCCESS;
}
