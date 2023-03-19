//
// Created by kurum on 西暦2023年3月19日.
//

#ifndef BIGNUM_CHAIN_H
#define BIGNUM_CHAIN_H
#include <iostream>
#include <self_made.h>
using namespace std;
template<typename T>
struct node{T value;node<T>* next;};


template<typename T>
class Chain
{
private:
    node<T>* head;
    node<T>* rear;
    unsigned int size;


public:
    Chain() {
        head = new node<T>;
        rear = new node<T>;
        rear->next = head;
        head->next = NULL;
        size = 0;
        //   rear= head;
    }
    Chain<T>* copy();
    void add(T value);
    void addHead(T value);
    void remove();
    void remove(int index);

    [[nodiscard]] node<T> *getHead() const;

    node<T> *getRear() const;

    unsigned int getSize() const {
        return size;
    }

};

template<typename T>
Chain<T>* Chain<T>::copy() {
    auto nChain=  new Chain<T>;
    auto s=this->size;
    auto no=this->getHead();
    for (; s >0 ; s--) {
        nChain->add(no->value);
        no=no->next;
    }
    return nChain;
}


#endif //BIGNUM_CHAIN_H
