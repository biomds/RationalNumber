//
// Created by Administrator on 2022/8/29.
//

#ifndef CLION_RATIONALNUMBER_H
#define CLION_RATIONALNUMBER_H

/*
 (RationalNumber Class) Create a class RationalNumber (fractions) with these capabilities:
 a) Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies
 fractions that are not in reduced form and avoids negative denominators.
 b) Overload the addition, subtraction, multiplication and division operators for this class.
 c) Overload the relational and equality operators for this class.
 */

class RationalNumber {
    friend std::ostream& operator<<(std::ostream&, const RationalNumber&);
public:
    explicit RationalNumber(int=0,int=1);
    void setFractions(int, int);
    int gcd(int, int);
    RationalNumber operator+(const RationalNumber&);
    RationalNumber operator-(const RationalNumber&);
    RationalNumber operator*(const RationalNumber&);
    RationalNumber operator/(const RationalNumber&);
    bool operator == (const RationalNumber&) const;
//    bool operator >= (const RationalNumber&) const;
//    bool operator <= (const RationalNumber&) const;
    bool operator != (const RationalNumber& right) const
    {
        return !(this == &right); // invokes RationalNumber::operator==
    }
private:
    int numerator; //分子
    int denominator; // 分母



};


#endif //CLION_RATIONALNUMBER_H
