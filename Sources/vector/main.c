#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"


int main (int argc,char ** argv)
{
	struct vector * my_vector = new_vector();
	struct vector * my_other_vector = new_vector();
	push_back_vector(my_vector, 10);
	push_back_vector(my_vector, 9);
	push_back_vector(my_vector, 8);
	prepend_vector(my_vector, 20);

	int my_dato = item_vector(my_vector, 2); // my_dato <- 8
	printf("%d\n", my_dato);

	delete_vector(my_vector);
	delete_vector(my_other_vector);

	return EXIT_SUCCESS;
}

