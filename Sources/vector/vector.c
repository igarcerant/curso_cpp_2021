#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

struct vector * new_vector(void)
{
	struct vector * ptr = (struct vector*) malloc (
			sizeof(struct vector)
		);
	ptr->capacity = 0;
	ptr->length = 0;
	ptr->datos = NULL;

	return ptr;
}

void delete_vector(struct vector* self)
{
	if (self->capacity > 0) {
		free(self->datos);
	}
	free(self);
}

void ensure_capacity(struct vector* self, int new_size)
{
	if (new_size < self->capacity) {
		// no hago nada
		return;
	} else {
		if (self->capacity == 0) {
			self->datos = (int*)malloc(sizeof(int)*new_size);
			self->capacity = new_size;
		} else {
			//
			int * ptr = (int*)malloc(sizeof(int)*new_size);
			int * tmp;
			bcopy(self->datos,ptr,self->length);
			tmp = self->datos;
			self->datos = ptr;
			free(tmp);
		}
	}
}

void push_back_vector(struct vector* self, int datum)
{
	ensure_capacity(self, self->length + 1);
	self->datos[self->length] = datum;
	self->length++;
}

void prepend_vector(struct vector* self, int datum)
{
    ensure_capacity(self, self->length+1);
    int i;
    for (i = self->length - 1; i > 0; i--) {
        self->datos[i-1] = self->datos[i];
    }
}

int item_vector(struct vector* self, int pos)
{
	return self->datos[pos];
}