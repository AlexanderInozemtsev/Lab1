

#ifndef SEM2LAB1_AUTOTESTRUN_H
#define SEM2LAB1_AUTOTESTRUN_H

#include "AutoTest.h"

#include "../Sorter/BubbleSorter.h"
#include "../Sorter/InsertionSorter.h"
#include "../Sorter/ShakerSorter.h"
#include "../Sorter/SelectionSorter.h"

void TestAll(){
    auto bubble =  new BubbleSorter<int>();
    auto insertion = new InsertionSorter<int>();
    auto shaker = new ShakerSorter<int>();
    auto selection = new SelectionSorter<int>();
    OnArray(bubble);
    OnArray(insertion);
    OnArray(shaker);
    OnArray(selection);
    OnList(bubble);
    OnList(insertion);
    OnList(selection);
    OnList(shaker);
    RemoveIfArray();
    RemoveAtArray();
    SortList();
    std::cout << "success" << std::endl;

}



#endif //SEM2LAB1_AUTOTESTRUN_H
