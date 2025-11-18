// Lista Simplesmente Encadeada Dinamica

typedef struct data Data;

typedef struct node{
    Data *info;
    struct node *prox;
}Node ;

typedef struct{
    Node *head;
    int size;
}SingleList;


