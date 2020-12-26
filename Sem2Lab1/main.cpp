#include <ctime>
#include "IO/IO.h"
#include "UI/UI.h"
#include "ManualTest/ManualTester.h"
#include "Sorter/Helper.h"
#include "AutoTest/AutoTestRun.h"


int main() {

    // int arr[6] =  {1,6,4,7,5,3};
    // auto seq = new ListSequence<int>(arr,6);
    // ws(std::cin);!!!!!!!

    auto ui = UI();
    auto bubble = new BubbleSorter<int>();
    auto shaker = new ShakerSorter<int>();
    auto insertion = new InsertionSorter<int>();
    auto selection = new SelectionSorter<int>();

    int number;
    do {
        ui.MainMenu();
        number = GetNumber();

        switch (number) {
            case -1:
                TestAll();
                break;
            case 1:
                ui.ArrayListMenu();
                number = GetNumber();
                if (number == 1) {
                    ui.SortersMenu();
                    ui.EnterNumber();
                    number = GetNumber();
                    ui.EnterSize();
                    int size = GetNumber();
                    ManualTester<int>::SemiManualArray(ui.Sorter(number), size);
                }
                if (number == 2) {
                    ui.SortersMenu();
                    ui.EnterNumber();
                    number = GetNumber();
                    ui.EnterSize();
                    int size = GetNumber();
                    ManualTester<int>::SemiManualList(ui.Sorter(number), size);
                }
                break;
            case 2:
                ui.ArrayListMenu();
                number = GetNumber();
                if (number == 1) {
                    ui.SortersMenu();
                    ui.EnterNumber();
                    number = GetNumber();
                   // ui.EnterSize();
                   // int size = GetNumber();
                    ManualTester<int>::ManualArray(ui.Sorter(number));
                }
                if (number == 2) {
                    ui.SortersMenu();
                    ui.EnterNumber();
                    number = GetNumber();
                    ManualTester<int>::ManualList(ui.Sorter(number));
                }
                break;
            case 3:
                ui.SeqTypeMenu();
                number = GetNumber();
                ui.SortersMenu();
                int sorter1 = GetNumber();
                int sorter2 = GetNumber();
                ui.EnterSize();
                int size = GetNumber();
                switch (number) {
                    case 1:
                        ManualTester<int>::CompareSorters(ui.Sorter(sorter1), ui.Sorter(sorter2),size);
                        break;
                    case 2:
                        ManualTester<int>::CompareOnCorrect(ui.Sorter(sorter1), ui.Sorter(sorter2),size);
                        break;
                    case 3:
                        ManualTester<int>::CompareOnReverse(ui.Sorter(sorter1), ui.Sorter(sorter2),size);
                        break;
                }
        }
        if (number != 0)
            system("pause");
    } while (number != 0);
};
