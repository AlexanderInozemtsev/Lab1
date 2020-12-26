

#ifndef SEM2LAB1_HELPER_H
#define SEM2LAB1_HELPER_H

#include "../../LAB2/Sequence.h"
template <class T>
class Helper{
public:
    void Swap(Sequence<T>* seq, int i,int j){
        T tmp = seq->Get(j);
        seq->Set(j,seq->Get(i));
        seq->Set(i,tmp);
    }

    static int ascending(int a, int b){
        return a > b;
    }

    static int descending(int a, int b){
        return a < b;
    }
};
#endif //SEM2LAB1_HELPER_H
