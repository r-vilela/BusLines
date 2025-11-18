// Lista Simplesmente Encadeada Dinamica

#include <limits>
typedef struct data Data;

typedef struct node{
    Data *info;
    struct node *prox;
}Node ;

typedef struct{
    Node *head;
    int size;
}SingleList;

void create(SingleList *list);

int add(SingleList *list, Data *data);

int deleteData(SingleList, Data *data);

void show(SingleList *list);

void showData(Data *data);

void destroy(SingleList *list);
