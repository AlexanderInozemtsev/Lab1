//
// Created by Alex on 10/10/2020.
//

#ifndef SEM2LAB1_SELECTIONSORTER_H
#define SEM2LAB1_SELECTIONSORTER_H

#include "ISorter.h"
#include "Helper.h"
template <class T>
class SelectionSorter : public ISorter<T>, Helper<T>{
public:
    Sequence<T>* Sort(Sequence<T>* seq, int (*cmp)(T,T)){
        for (int i = 0; i <seq->GetLength() ; ++i) {
            T currentMin = seq->Get(i);
            int currentMinIndex = i;
            for (int j = i; j < seq->GetLength(); ++j) {
                if (cmp(currentMin, seq->Get(j))) {
                    currentMin = seq->Get(j);
                    currentMinIndex = j;
                }
            }
            this->Swap(seq, currentMinIndex, i);
        }
        return seq;
    }
};

#endif //SEM2LAB1_SELECTIONSORTER_H
