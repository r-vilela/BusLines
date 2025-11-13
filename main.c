#include "bus.h"
#include "doubleList.h"
#include <stdio.h>

typedef struct data_type {
  int value;
} BusLines;

int comp(BusLines *data1, BusLines *data2) {
  if (data1->value == data2->value)
    return 1;
  return 0;
}

void showData(DataType *data) { printf("%d\n", data->value); }

int main() {

  DoubleList L;

  create(&L);

  BusLines b1;
  b1.value = 1;

  BusLines b2;
  b2.value = 2;

  BusLines b3;
  b3.value = 3;

  add(&L, &b1);
  add(&L, &b2);
  add(&L, &b3);

  show(&L);

  return 0;
}
