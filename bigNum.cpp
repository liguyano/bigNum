//
// Created by kurum on 西暦2023年3月19日.
//
#include "bigNum.h"
#define UM ULLONG_MAX;

bigNum::bigNum(unsigned long ini_value,bool mop) {
    mOrp=mop;
date=new Chain<unsigned long>;
date->add(ini_value);
}

bigNum::~bigNum() {
    while (date->getSize())
    {
        date->remove();
    }
    delete date;
}

bigNum bigNum::operator+(bigNum n) {
    ULONG_MAX;
    return bigNum(0,0);
}

bigNum bigNum::operator+(int num) {
    auto tmp=this->date->copy();
    if (num>0)
    {
        auto sa=UM-tmp->getHead()->value;
        if (num>=sa)
        {
            tmp->getHead()->value=num-sa;
            _carry(tmp->getHead());
        }else
        {
            tmp->getHead()->value+=sa;
        }
    }
    bigNum result(tmp);
    result.mOrp= this->mOrp;
    return result;
}

void bigNum::_carry(node<unsigned long> *which) {
auto n=which->next;
    if (n==NULL)
    {
        date->add(1);
    }else
    {
        if (UM-n->value<=1)
        {
            n->value=0;
            _carry(n);
        }
    }
}

bigNum::bigNum(Chain<unsigned long> *date) {
    this->date=date;

}

string bigNum::to_string() {
    string result=";";

    return std::string();
}
