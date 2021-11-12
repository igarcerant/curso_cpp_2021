#include <stdio.h>
#include <stdlib.h>
#include "hash.h"


int main (int argc,char ** argv)
{
  struct hash * hs = new_hash();
  insert_hash(hs,10,11);
  insert_hash(hs,9,8);
  insert_hash(hs,7,12);
  insert_hash(hs,6,89);
  insert_hash(hs,5,100);
  printf("%d\n", item_hash(hs,10)); // debe mostrar 11
  printf("%d\n", item_hash(hs,9)); // debe mostrar 8
  printf("%d\n", item_hash(hs,8));  // 0
  printf("%d\n", item_hash(hs,7));  // 12
  printf("%d\n", item_hash(hs,6));  // 89
  printf("%d\n", item_hash(hs,5));  // 100
  delete_hash(hs);
  return EXIT_SUCCESS;
}
