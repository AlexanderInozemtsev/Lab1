#include "ISorter.h"
#include "Helper.h"
#ifndef SEM2LAB1_BUBLESORTER_H
#define SEM2LAB1_BUBLESORTER_H


template <class T>
class BubbleSorter: public ISorter<T>, public Helper<T> {

public:
    Sequence<T>* Sort(Sequence<T>* seq, int (*cmp)(T, T)) override {
        //int a = seq->GetLength();
        for (int i = 1; i < seq->GetLength() ; ++i) {
            for (int j = 0; j <seq->GetLength() - i; ++j) {
                if (cmp(seq->Get(j),seq->Get(j+1))){
                    this->Swap(seq,j,j+1);
                }
            }
        }
        return seq;
    }
};


#endif //SEM2LAB1_BUBLESORTER_H
