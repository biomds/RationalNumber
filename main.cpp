//
// Created by Administrator on 2022/8/30.
//
#include <iostream>
#include <stdexcept>
#include "RationalNumber.h"

using namespace std;

int main()
{
    RationalNumber r1;
    RationalNumber r2(-3,-9);
    RationalNumber r3(-30,20);
    cout << "r1 is: " << r1;
    cout << "\nr2 is: " << r2;
    cout << "\nr3 is: " << r3 << endl;
    cout << "\nr2 + r3 = " << r2 + r3;
    cout << "\nr2 - r3 = " << r2 - r3;
    cout << "\nr2 * r3 = " << r2 * r3;
    cout << "\nr2 / r3 = " << r2 / r3 << endl;
    cout << "\nComparation: r2 == r3\n"
        <<  ((r2 == r3) ? "r3 is equal to r3" : "r3 is not equal to r3.") << endl;
//        << ((r2 != r3) ? " r3 is not equal to r3" : "r3 is  equal to r3.") << endl;
    cout << "\nComparation: r2 != r3\n"
        <<  ((r2 != r3) ? "r3 is not equal to r3" : "r3 is  equal to r3.") << endl;
    return 0;
}

