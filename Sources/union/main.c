#include <stdio.h>
#include <stdlib.h>

	union P1
	{
		int n;
		float x;
		char * p;
	};
	enum P2 {
		Variant_INT,
		Variant_FLOAT,
		Varian_POINTER
	};


struct Variant
{
	union P1 value;
	enum P2 type;
};

int main(int argc,char ** argv)
{
	struct Variant v;
	v.value.n = 10;
	v.type = Variant_INT;
	printf("%d\n", v.value.n);
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(char) = %lu\n", sizeof(char));
	printf("sizeof(char*) = %lu\n", sizeof(char*));
	printf("sizeof(union p1) = %lu\n", sizeof(union P1));
	printf("sizeof(enum P2) = %lu\n", sizeof(enum P2));
	printf("sizeof(struct Variant) = %lu\n", sizeof(struct Variant));
	return EXIT_SUCCESS;
}



