//
// Created by Administrator on 2022/8/29.
//

#include <iostream>
#include <cmath>
#include <stdexcept>
#include "RationalNumber.h"

using namespace std;



RationalNumber::RationalNumber(int n, int d)
    :numerator(n),
    denominator(d != 0 ? d :
        throw invalid_argument("denominator must be great than 0"))
{
    setFractions(n, d);
}

void RationalNumber::setFractions(int n, int d)
{
    int gcd_num=gcd(n, d);
    numerator = n / gcd_num;
    denominator = d / gcd_num;
}

/*int RationalNumber::gcd(int x, int y)
{
    int t;
    if(x < y)
    {
        t = x;
        x = y;
        y = t;
    }
    if(x % y == 0)
    {
        return y;
    }else{
        return gcd(y, x %y);
    }
}*/
int RationalNumber::gcd(int x, int y)
{
    if(y == 0)
    {
        return x;
    }else{
        return gcd(y, x % y);
    }
}

RationalNumber RationalNumber::operator+(const RationalNumber& right)
{
    RationalNumber temp = *this;
    temp.numerator = temp.numerator * right.denominator + temp.denominator * right.numerator;
    temp.denominator *= right.denominator;
    int gcd_num = gcd(temp.numerator, temp.denominator);
    temp.numerator /=  gcd_num;
    temp.denominator /=  gcd_num;
    return temp;
}

RationalNumber RationalNumber::operator-(const RationalNumber& right)
{
    RationalNumber temp = *this;
    temp.numerator = temp.numerator * right.denominator - temp.denominator * right.numerator;
    temp.denominator *= right.denominator;
    int gcd_num = gcd(temp.numerator, temp.denominator);
    temp.numerator /=  gcd_num;
    temp.denominator /=  gcd_num;

    return temp;
}

RationalNumber RationalNumber::operator*(const RationalNumber& right)
{
    RationalNumber temp = *this;
    temp.numerator *= right.numerator;
    temp.denominator *= right.denominator;
    int gcd_num = gcd(temp.numerator, temp.denominator);
    temp.numerator /=  gcd_num;
    temp.denominator /=  gcd_num;
    return temp;
}

RationalNumber RationalNumber::operator/(const RationalNumber& right)
{
    RationalNumber temp = *this;
    temp.numerator *= right.denominator;
    temp.denominator *= right.numerator;
    int gcd_num = gcd(temp.numerator, temp.denominator);
    temp.numerator /=  gcd_num;
    temp.denominator /=  gcd_num;
    return temp;
}

bool RationalNumber::operator == (const RationalNumber& right) const
{
    return (this->denominator == right.denominator &&
           this->numerator == right.numerator);
}

ostream& operator<<(ostream& output, const RationalNumber& rn)
{
    if(rn.numerator < 0 || rn.denominator < 0)
    {
        output << "-" << abs(rn.numerator) << "/" << abs(rn.denominator);
    }else{
        output <<  rn.numerator << "/" << rn.denominator;
    }
    return output;
}