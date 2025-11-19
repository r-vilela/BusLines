#ifndef SINGLE_LIST_H
#define SINGLE_LIST_H
// Lista Simplesmente Encadeada Dinamica

typedef struct data Data;

typedef struct nodes{
    Data *info;
    struct nodes *next;
}NodeS ;

typedef struct{
    NodeS *head;
    int size;
}SingleList;

void createS(SingleList *list);

int addS(SingleList *list, Data *data);

int deleteData(SingleList *list, Data *data);

void showS(SingleList *list);

int isEmptyS(SingleList *list);

void destroyS(SingleList *list);

int compS(Data *data1, Data *data2);

void showDataS(Data *data);

#endif
