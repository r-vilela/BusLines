#include "doubleList.h"
#include <stdlib.h>

void create(DoubleList *list){
    list->head = NULL;
    list->tail = NULL;
}

int insert(DoubleList *list, DataType data){
    Node *n = (Node *) malloc(sizeof(Node));
    n->info = data;
    if(n==NULL)
        return 0;
    if(list->tail==NULL){
        list->tail = n;
        list->head = n;
        n->next = list->head;
        n->prev = list->tail;
    }else{
        n->next = list->head;
        list->head->prev = n;
        list->head = n;
    }
    return 1;
};

int dell(DoubleList *list, DataType data){
    Node *n;


}

DataType const * search(DoubleList *list, DataType data){
    Node *n;

    for(n = list->head; !comp(data, n->info)&&comp(list->tail->info, n->info);n = n->next);

    if(comp(list->tail->info, n->info))
        return NULL;

    return n;
}

int comp(DataType data1,DataType data1);
