
#ifndef SEM2LAB1_IO_H
#define SEM2LAB1_IO_H
#include <iostream>
#include "../../LAB2/Sequence.h"
#include "../../LAB2/ListSequence.h"
#include "../../LAB2/ArraySequence.h"

void PrintSeq(Sequence<int>* seq);

ArraySequence<int> * GetArraySeq();

ListSequence<int> * GetListSeq();

int GetNumber ();


#endif //SEM2LAB1_IO_H
