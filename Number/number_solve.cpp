//
// Created by kurum on 西暦2023年3月19日.
//

#include "number_solve.h"

string Num::ul216s(unsigned long n) {
    string result="";
    unsigned long ans;
    unsigned long remainder;
    do {
         remainder=n%16;
        if (remainder>=10)
        { char r=remainder-10+'A';result=r+result;}
         else
             result= to_string(remainder)+result;
         ans=n/16;
         n=ans;
    } while (ans>0);


    return result;
}