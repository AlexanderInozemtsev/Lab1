
#ifndef SEM2LAB1_ISORTER_H
#define SEM2LAB1_ISORTER_H
#include "../../LAB2/Sequence.h"
template <class T>
class ISorter{
public:
    virtual Sequence<T>* Sort(Sequence<T>* seq, int (*ascending)(T,T)) = 0;
    virtual ~ISorter()= default;
};

#endif //SEM2LAB1_ISORTER_H
