#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

/**
 * @defgroup DoubleList
 * @brief Lista Duplamente Encadeada Circular.
 * @warning Para utilizar, deve declarar os dados de DataType e a funcao comp,
 * que sera usada para comparar os DataTypes.
 *
 */

typedef struct data_type DataType;

typedef struct node {
  DataType *info;
  struct node *next;
  struct node *prev;
} Node;

typedef struct {
  Node *head;
} DoubleList;

/**
 * @addtgroup DoubleList
 *
 * @{
 */

/**
 * @brief Cria a lista.
 * @param Recebe o ponteiro de uma DoubleList.
 */
void create(DoubleList *list);

/**
 * @brief Insere um elemento na lista.
 * @param Recebe como parametro um ponteiro de uma DoubleList e o ponteiro de um DataType para
 * ser inserido na lista.
 * @return retorna 1 se conseguir inserir ou 0 caso nao consiga.
 */
int add(DoubleList *list, DataType *data);

/**
 * @brief Remove um elemento da lista.
 * @param Recebe como parametro um ponteiro de uma DoubleLIst e o ponteiro de DataTyp que
 * deseja remover da lista.
 * @return retorna 1 se conseguir remver ou 0 casa nao consiga.
 */
int deleteData(DoubleList *list, DataType *data);

/**
 * @brief Remover elemento.
 * @param Recebe como parameteo o no para ser removido
 */
void removeData(Node *n);

/**
 * @brief Procurar elemento na lista.
 * @param Recebe como parametro um ponteiro de uma DoubleLIst e o DataTyp que
 * deseja procurar na lista.
 * @return Retorna um ponteiro constante do elemento achado, evitando que o
 * conteudo seja alterado, ou NULL, caso o elemento nao seja encontrado.
 */
DataType const *search(DoubleList *list, DataType *data);

/**
 * @brief Compara elementos na lista
 * @warning esse funcao sera usada em nas operacoes da lista! Eh importante
 * defini-la antes de usar.
 */
int comp(DataType *data1, DataType *data2);

void show(DoubleList *list);

void showData(DataType *data);

/** @} */

#endif
