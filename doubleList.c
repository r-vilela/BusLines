#include "doubleList.h"
#include <stdio.h>
#include <stdlib.h>

void create(DoubleList *list) { list->head = NULL; }

int add(DoubleList *list, DataType *data) {
  Node *n = (Node *)malloc(sizeof(Node));
  if (n == NULL)
    return 0;
  n->info = data;

  if (list->head == NULL) {
    list->head = n;
    n->next = list->head;
    n->prev = list->head;
  } else {
    n->next = list->head;
    list->head->prev->next = n;
    list->head->prev = n;
    n->prev = list->head->prev;
    n->next = list->head;
    list->head = n;
  }
  return 1;
};

int deleteData(DoubleList *list, DataType *data) {
  Node *n;

  if (comp(list->head->info, data)) {
    removeData(n);
    return 1;
  }

  for (n = list->head->next; !comp(n->info, list->head->info); n = n->next) {
    if (comp(n->info, data)) {
      removeData(n);
      return 1;
    }
  }
  return 0;
}

void removeData(Node *n) {
  n->prev->next = n->next;
  n->next->prev = n->prev;
  free(n);
}

DataType const *search(DoubleList *list, DataType *data);

void show(DoubleList *list) {
  Node *n = list->head;

  showData(n->info);
  n = n->next;

  for (n; !comp(n->info, list->head->info); n = n->next)
    showData(n->info);
}
