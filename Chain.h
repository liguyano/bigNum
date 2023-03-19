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


public:
    Chain()
    {
        head=new node<T>;
        rear=new node<T>;
        rear->next=head;
        head->next=NULL;
        //   rear= head;
    }
    void add(T value);
    void addHead(T value);
    void remove();
    void remove(int index);

    [[nodiscard]] node<T> *getHead() const;

    node<T> *getRear() const;

};

#endif //BIGNUM_CHAIN_H
