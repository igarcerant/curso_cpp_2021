#include <stdlib.h> // por malloc()
#include <string.h>
#include "hash.h"


struct hash * new_hash(void)
{
  struct hash* self = (struct hash*)malloc(sizeof(struct hash));
  bzero(self,sizeof(struct hash));
  self->size = SIZE_HASH;
  return self;
}

void delete_hash(struct hash* self)
{
  free(self);
}

/**
 *  \brief One-at-a-Time hash implementation
 *         by Bob Jenkins
 *
 *  This algorithm developed by Bob Jenkins is
 *  short and easy to grasp and not require tables
 *  with random numbers as some of the most
 *  advances routines published so far.
 *
 *  It is highly recommended try this function
 *  first for any real world application.
 *
 *  \param cfg pointer to the configuration dictionary.
 *
 *  \param key string which hash value will be
 *         returned.
 *
 *  \return the hash value computed with the
 *          algorithm One-at-a-Time.
 */
static size_t fn_hash (config_t cfg, char*key )
{
    size_t hv = 0;
    int i;
    size_t slots = cfg-> slots;

    for (i = 0 ; key[ i]; i++) {
        hv += key[ i];
        hv += ( hv << 10 );
        hv ^= ( hv >> 6 );
    }

    hv += ( hv << 3 );
    hv ^= ( hv >> 11 );
    hv += ( hv << 15 );

    return (hv % slots);
}

void insert_hash(struct hash* self, int key, int value)
{
  int hv = _hash(key);
  if ((self->data[hv % self->size]) == NULL) {
    struct node * node = new_node(key,value);
    self->data[hv % self->size] = node;
  } else {
    struct node * node = new_node(key,value);
    node->next = self->data[hv % self->size];
    self->data[hv % self->size] = node;
  }
}

int item_hash(struct hash* self, int key)
{
  int hv = _hash(key);
  struct node * ptr = self->data[hv % self->size];

}
