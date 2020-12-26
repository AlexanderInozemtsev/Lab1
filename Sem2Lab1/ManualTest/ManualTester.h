
#ifndef SEM2LAB1_MANUALTESTER_H
#define SEM2LAB1_MANUALTESTER_H

#include "../../LAB2/Sequence.h"
#include "../../LAB2/ArraySequence.h"
#include "../../LAB2/ListSequence.h"
#include "../Sorter/ISorter.h"
#include "../Sorter/Helper.h"
#include <ctime>
#include <iostream>
#include "../IO/IO.h"
template <class T>
class ManualTester: public Helper<T> {
public:

    static void CompareOnCorrect (ISorter<T>* sorter1, ISorter<T>* sorter2,int size = 1000){
        ArraySequence<T>* seq = CorrectOrderArray(size);
        int start1 = clock();
        sorter1->Sort(seq,Helper<T> :: ascending);
        int end1 = clock();
        int start2 = clock();
        sorter2->Sort(seq,Helper<T> :: ascending);
        int end2 = clock();
        std::cout << "Sorter1: " << end1 - start1 << "ms, Sorter2: " << end2 - start2 << "ms." << std::endl;
    }
    static void CompareOnReverse (ISorter<T>* sorter1, ISorter<T>* sorter2, int size = 1000){
        ArraySequence<T>* seq = ReverseOrderArray(size);
        int start1 = clock();
        sorter1->Sort(seq,Helper<T> :: ascending);
        int end1 = clock();
        int start2 = clock();
        sorter2->Sort(seq,Helper<T> :: ascending);
        int end2 = clock();
        std::cout << "Sorter1: " << end1 - start1 << "ms, Sorter2: " << end2 - start2 << "ms." << std::endl;
    }
    static void CompareSorters (ISorter<T>* sorter1, ISorter<T>* sorter2,int size = 1000){
        ArraySequence<T>* seq = GenerateArraySeq(size);
        int start1 = clock();
        sorter1->Sort(seq,Helper<T>::ascending);
        int end1 = clock();
        int start2 = clock();
        sorter2->Sort(seq,Helper<T> :: ascending);
        int end2 = clock();
        std::cout << "Sorter1: " << end1 - start1 << "ms, Sorter2: " << end2 - start2 << "ms." << std::endl;
    }
  static void SemiManualList (ISorter<T>* sorter, int size){
      ListSequence<T>* seq = GenerateListSeq(size);
      int start = clock();
      sorter->Sort(seq, Helper<T>::ascending);
      int end = clock();
      if (size <=1000)
          PrintSeq(seq);
      std::cout << end - start << "ms" << std::endl;
  }

    static void SemiManualArray (ISorter<T>* sorter, int size){
        ArraySequence<T>* seq = GenerateArraySeq(size);
        int start = clock();
        sorter->Sort(seq, &Helper<T>::ascending);
        int end = clock();
        if (size <= 1000)
            PrintSeq(seq);
         std::cout << end - start << "ms" << std::endl;
    }


  static void ManualList(ISorter<T>* sorter){
      std::cout << "Enter sequence separated by spaces " << std::endl;
      ws(std::cin);
      ListSequence<T>* seq = GetListSeq();
      sorter->Sort(seq, Helper<T>::ascending);
      PrintSeq(seq);
  }
  static void ManualArray(ISorter<T>* sorter){
      std::cout << "Enter sequence separated by spaces " << std::endl;
      ArraySequence<T>* seq = GetArraySeq();
      sorter->Sort(seq, Helper<T>::ascending);
      PrintSeq(seq);
  }

private:
    static ListSequence<T>* GenerateListSeq(int size){
        auto seq = new  ListSequence<T>();
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Append(std::rand()*2 - RAND_MAX);
        }
        return seq;
    }

    static ArraySequence<T>* GenerateArraySeq(int size){
        auto seq = new  ArraySequence<T>(size);
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Set(i,std::rand()*2 - RAND_MAX);
        }
        return seq;
    }

    static ListSequence<T>* CorrectOrderList(int size){
        auto seq = new  ListSequence<T>();
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Append(i);
        }
        return seq;
    }

    static ArraySequence<T>* CorrectOrderArray(int size){
        auto seq = new  ArraySequence<T>(size);
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Set(i,i);
        }
        return seq;
    }

    static ListSequence<T>* ReverseOrderList(int size){
        auto seq = new  ListSequence<T>();
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Append(size - i);
        }
        return seq;
    }

    static ArraySequence<T>* ReverseOrderArray(int size){
        auto seq = new  ArraySequence<T>(size);
        std::srand(std::time(nullptr));
        for (int i = 0; i < size ; ++i) {
            seq->Set(i, size - i);
        }
        return seq;
    }
};


#endif //SEM2LAB1_MANUALTESTER_H
