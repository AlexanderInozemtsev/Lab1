

#ifndef SEM2LAB1_UI_H
#define SEM2LAB1_UI_H

#include "../Sorter/ISorter.h"
#include "../Sorter/BubbleSorter.h"
#include "../Sorter/InsertionSorter.h"
#include "../Sorter/ShakerSorter.h"
#include "../Sorter/SelectionSorter.h"

class UI {
public:
    void MainMenu();

    void ArrayListMenu();

    void SeqTypeMenu();

    void SortersMenu();

    void EnterNumber();

    void EnterSize();

    ISorter<int> *Sorter(int n);
};

#endif //SEM2LAB1_UI_H
