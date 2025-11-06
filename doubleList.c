#include "doubleList.h"
#include <stdlib.h>

void create(DoubleList *list){
    list->head = NULL;
    list->tail = NULL;
}

int insert(DoubleList *list, DataType data);

int dell(DoubleList *list, DataType data);

DataType const * search(DoubleList *list, DataType data);
