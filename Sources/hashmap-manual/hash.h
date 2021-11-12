#ifndef HASH_H
#define HASH_H 1

#define SIZE_HASH 5

struct node
{
  struct node* next;
  int key;
  int value;
};

struct hash
{
  struct node data[SIZE_HASH];
  int size;
};

struct hash * new_hash(void);
void delete_hash(struct hash* self);
void insert_hash(struct hash* self, int key, int value);
int item_hash(struct hash* self, int key);

#endif /*HASH_H*/
