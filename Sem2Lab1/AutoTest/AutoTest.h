
#ifndef SEM2LAB1_AUTOTEST_H
#define SEM2LAB1_AUTOTEST_H

#include <cassert>
#include "../Sorter/ISorter.h"
#include "../../LAB2/ListSequence.h"
#include "../../LAB2/ArraySequence.h"
#include "../../LAB2/LinkedList.h"
#include <ctime>


int ascending(int a,int b){
    return a>b;
}

int descending(int a,int b){
    return a<b;
}

void OnList(ISorter<int>* sorter){
    int testArr[7] = {2,7,5,6,0,1,3};
    auto testSeq = ListSequence<int>(testArr,7);
    sorter->Sort(&testSeq,&ascending);
    int expectedArr[7] = {0,1,2,3,5,6,7};
    auto expectedSeq = ListSequence<int>(expectedArr,7);
    assert(expectedSeq == testSeq);
}


void OnArray(ISorter<int>* sorter){
    int testArr[7] = {2,7,5,6,0,1,3};
    auto testSeq = ArraySequence<int>(testArr,7);
    sorter->Sort(&testSeq,&ascending);
    int expectedArr[7] = {0,1,2,3,5,6,7};
    auto expectedSeq = ArraySequence<int>(expectedArr,7);
    assert(expectedSeq == testSeq);
}

    bool pred(int a) {
        return a%2 == 0;
    }
    void RemoveIfArray() {
        int testArr[7] = {2, 7, 5, 6, 4, 1, 3};
        auto testSeq = ArraySequence<int>(testArr, 7);
        testSeq.RemoveIf(pred);
        int expectedArr[4] = {7,5,1,3};
        auto expectedSeq = ArraySequence<int>(expectedArr, 4);
        assert(expectedSeq == testSeq);
    }

  void RemoveAtArray(){
      int testArr[7] = {2, 7, 5, 6, 0, 1, 3};
      auto testSeq = ArraySequence<int>(testArr, 7);
      testSeq.RemoveAt(5);
      int expectedArr[6] = {2,7,5,6,0,3 };
      auto expectedSeq = ArraySequence<int>(expectedArr, 6);
      assert(expectedSeq == testSeq);
  }
 void SortList(){
     int testArr[7] = {2, 7, 5, 6, 0, 1, 3};
     int expectedArr[7] = {0, 1, 2, 3, 5, 6, 7};

     auto testSeq = ListSequence<int>(testArr, 7);
     auto expectedSeq = ListSequence<int>(expectedArr, 7);

    // int start = clock();
     testSeq.Sort(ascending);
    // int end = clock();
    // std::cout << end - start << "ms" << std::endl;

     assert(expectedSeq == testSeq);
}
void MergeTest(){

}



#endif //SEM2LAB1_AUTOTEST_H
