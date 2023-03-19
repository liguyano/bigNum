#include <iostream>
#include <self_made.h>
#include "Chain.h"
#include "Chain.tpp"
#include "bigNum.h"
int main() {
    bigNum num(ULLONG_MAX);
    auto re=num+1;
    Chain<int > hain;
    for (int i = 0; i < 10; ++i)
        hain.add(i);
    auto nc=hain.copy();

    lnprint(ULONG_MAX);
    return 0;
}
