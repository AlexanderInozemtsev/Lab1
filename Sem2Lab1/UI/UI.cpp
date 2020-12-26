
#include <iostream>
#include "UI.h"

void UI::MainMenu() {
    std::cout << "Choose an option: " << std::endl;
    std::cout << "-1 : Run Autotest " << std::endl;
    std::cout << "0 : Exit " << std::endl;
    std::cout << "1: Run Semi-manual test" << std::endl;
    std::cout << "2: Run manual test" << std::endl;
    std::cout << "3: Run comparison " << std::endl;
}

void UI::ArrayListMenu() {
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1: On ArraySequence" << std::endl;
    std::cout << "2: On ListSequence" << std::endl;
}

void UI::SeqTypeMenu() {
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1: Random sequence" << std::endl;
    std::cout << "2: Correct order sequence" << std::endl;
    std::cout << "3: Reversed sequence" << std::endl;
}

void UI::SortersMenu() {
    std::cout << "Choose a sorting: " << std::endl;
    std::cout << "1: Bubble" << std::endl;
    std::cout << "2: Selection" << std::endl;
    std::cout << "3: Shaker" << std::endl;
    std::cout << "4: Insertion" << std::endl;

}

void UI::EnterNumber() {
    std::cout << "Enter a number: " << std::endl;
}

void UI::EnterSize() {
    std::cout << "Enter a size of a sequence" << std::endl;

}

ISorter<int> *UI::Sorter(int n) {
    if (n == 1)
        return new BubbleSorter<int>();
    if (n == 2)
        return new SelectionSorter<int>();
    if (n == 3)
        return new ShakerSorter<int>();
    if (n == 4)
        return new InsertionSorter<int>();
    return nullptr;
}
