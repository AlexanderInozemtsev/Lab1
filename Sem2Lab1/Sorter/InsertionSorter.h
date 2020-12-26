

#ifndef SEM2LAB1_INSERTIONSORTER_H
#define SEM2LAB1_INSERTIONSORTER_H

#include "ISorter.h"
#include "Helper.h"
template <class T>
class InsertionSorter : public ISorter<T>, Helper<T> {

public:
    Sequence<T>* Sort(Sequence<T>* seq, int (*cmp)(T,T)) override {
        for (int i = 0; i < seq->GetLength() ; ++i) {
            for (int j = i; j > 0 && cmp(seq->Get(j-1),seq->Get(j)); --j) {
                this->Swap(seq, j-1, j);
            }
        }
        return seq;
    }
};
#endif //SEM2LAB1_INSERTIONSORTER_H
