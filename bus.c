#include "bus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// SingleList

int compS(Line *data1, Line *data2) {
  return (data1->lineNum == data2->lineNum);
}

void showDataS(Data *data) {
  printf("\t%d - %s\n", data->lineNum, data->lineName);
}

// DoubleList

int comp(Stop *data1, Stop *data2) {
  char *n1 = data1->stopName, *n2 = data2->stopName;
  for (; n1 != NULL; n1++, n2++)
    if (n1 != n2)
      return 0;

  return 1;
}
void showData(DataType *data) {
  printf("\t%s - Arrives at %d and leaves at %d\n", data->stopName,
         data->arrival, data->leave);
}

int addLine(Bus *bus, int lineNum, char lineName[15]){
    Line *l = (Line *) malloc(sizeof(Line));
    if(l == NULL)
        return -1;
    strcpy(l->lineName, lineName);
    l->lineNum = lineNum;
    l->stop = NULL;

    return addS(bus->Lines, l);
}
