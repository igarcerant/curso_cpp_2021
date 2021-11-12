#ifndef VECTOR_H
#define VECTOR_H 1

struct vector
{
	int capacity; // maximo numero de elementos disponibles
	int length;   // numero de elementos en uso
	int * datos;  // puntero al arreglo asignado dinamicamente
};

struct vector * new_vector(void);
void delete_vector(struct vector* self);

void ensure_capacity(struct vector* self, int new_size);
void push_back_vector(struct vector* self, int datum);
void prepend_vector(struct vector* self, int datum);
int item_vector(struct vector* self, int pos);


#endif /*VECTOR_H*/
