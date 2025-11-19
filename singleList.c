#include "singleList.h"
#include <stdlib.h>

void createS(SingleList *list){
    list->head = NULL;
    list->size = 0;
}

int addS(SingleList *list, Data *data){
    NodeS *n = (NodeS *) malloc(sizeof(NodeS));

    if(n == NULL)
        return 0;
    n->info = data;

    n->next = list->head;
    list->head = n;
    list->size++;
    return 1;
}

int deleteData(SingleList *list, Data *data){
    if(isEmptyS(list))
        return -1;
    NodeS *n, *p;
    for(n=list->head;n!=NULL&&!compS(n->info, data);p=n, n=n->next);

    if(n==NULL)
        return 0;
    p->next = n->next;
    free(n);
    return 1;
}

void showS(SingleList *list){
    NodeS *n;

    for(n=list->head;n!=NULL;n=n->next)
        showDataS(n->info);
}

int isEmptyS(SingleList *list){
    return (list->size == 0);
}

void destroyS(SingleList *list){
    NodeS *n, *p;

    for(n=list->head;n!=NULL;p=n,n=n->next,free(p));

    createS(list);
}
