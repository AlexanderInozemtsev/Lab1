#ifndef SEM2LAB1_SHAKERSORTER_H
#define SEM2LAB1_SHAKERSORTER_H

#include "ISorter.h"
#include "Helper.h"
template <class T>
class ShakerSorter : public ISorter<T>, public Helper<T> {
public:
    Sequence<T>* Sort(Sequence<T>* seq, int (*cmp)(T,T)){
        int left = 0;
        int right = seq->GetLength() - 1;
        int lastSwap;
        int flag = 1;
        while (flag){
            flag = 0;
            for (int i = left; i <right; ++i) {
                if (cmp(seq->Get(i),seq->Get(i+1))){
                    this->Swap(seq,i,i+1);
                    flag = 1;
                    lastSwap= i;
                }
            }
            right = lastSwap;
            for (int j = right; j > left  ; --j) {
                if (cmp(seq->Get(j -1),seq->Get(j))){
                    this->Swap(seq,j-1,j);
                    flag = 1;
                    lastSwap = j;
                }
            }
            left = lastSwap;
        }
        return seq;
    }
};

#endif //SEM2LAB1_SHAKERSORTER_H
