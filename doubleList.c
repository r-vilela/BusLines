#include "doubleList.h"
#include <stdlib.h>

void create(DoubleList *list) {
  list->head = NULL;
  list->tail = NULL;
}

int add(DoubleList *list, DataType *data){
  Node *n = (Node *)malloc(sizeof(Node));
  if (n == NULL)
      return 0;
  n->info = data;

  if (list->tail == NULL) {
    list->tail = n;
    list->head = n;
    n->next = list->head;
    n->prev = list->tail;
  } else {
    n->next = list->head;
    list->head->prev = n;
    list->head = n;
  }
  return 1;
};

int dell(DoubleList *list, DataType data);

DataType const * search(DoubleList *list, DataType data);

int comp(DataType data1,DataType data2);
