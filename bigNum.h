//
// Created by kurum on 西暦2023年3月19日.
//

#ifndef BIGNUM_BIGNUM_H
#define BIGNUM_BIGNUM_H
#include "Chain.h"
#include "Chain.tpp"

class bigNum {
public:
    bool mOrp=1;
    bigNum(unsigned long ini_value,bool mop=0);
    bigNum(Chain<unsigned long>* date);
    ~bigNum();
    bigNum operator+(bigNum n);
    bigNum operator+(int num);
    string to_string();
private:
    Chain<unsigned long>* date;
    void _carry(node<unsigned long>* which);

};


#endif //BIGNUM_BIGNUM_H
