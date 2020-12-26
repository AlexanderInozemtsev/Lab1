//
// Created by Alex on 10/10/2020.
//

#include "IO.h"
void PrintSeq(Sequence<int>* seq){
    std::cout<< seq->Get(0);
    for (int i = 1; i < seq->GetLength() ; ++i) {
        std::cout<< ", ";
        std::cout<< seq->Get(i);
    }
    std::cout << std::endl;
};

ArraySequence<int>* GetArraySeq(){
    std::string string;
    std::cin >> std::ws;
    std::getline(std::cin, string);
    auto seq = new ArraySequence<int>();
    std::string currentValue;
    for (int i = 0; i <string.length() ; ++i) {
        if (string[i] != ' ') {
            currentValue +=string[i];
        }
        else {
            seq->Append(std::stoi(currentValue));
            currentValue = " ";
        }
    }
    seq->Append(std::stoi(currentValue));
    return seq;
}

ListSequence<int>* GetListSeq(){
    std::string string;
    std::cin >> std::ws;
    std::getline(std::cin, string);
    auto seq = new ListSequence<int>();
    std::string currentValue;
    for (int i = 0; i <string.length() ; ++i) {
        if (string[i] != ' ') {
            currentValue +=string[i];
        }
        else {
            seq->Append(std::stoi(currentValue));
            currentValue = " ";
        }
    }
    seq->Append(std::stoi(currentValue));
    return seq;
}

int GetNumber (){
    std::string string;
    std::getline(std::cin, string);
    return std::stoi(string);
}