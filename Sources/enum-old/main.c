#include <stdio.h>
#include <stdlib.h>

#define UNO 1
#define DOS 2

enum Numero
{
	Zero = 0,
	One,
	Two,
	Three,
	Four,
	Five,
	Ten = 10,
	Eleven
};


int main(int argc,char ** argv)
{
	enum Numero n;
	n = Zero;
	n = Five;
	printf("%d\n", n);
	switch(n) {
	case Zero:
	case One:
	case Two:
		printf("es un caso conocido\n");
	}
	return EXIT_SUCCESS;
}

