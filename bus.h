#ifndef BUS_H
#define BUS_H
#include "singleList.h"
#include "doubleList.h"

typedef struct data {
  int lineNum;
  char lineName[15];
  DoubleList *stop;
} Line;

typedef struct data_type {
  char stopName[15];
  int arrival; // Armazenado em minutos
  int leave;   // Armazenado em minutos
} Stop;

typedef struct{
    SingleList *Lines;
}Bus;

int addLine(Bus *bus, int lineNum, char lineName[15]);

#endif

