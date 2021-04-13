#ifndef __FRACTION_H_
#define __FRACTIION_H_
// C++ program to add 2 fractions
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class fraction
{
public:
    T numerator;
    T denominator;
    fraction();
    fraction(const T ,const T );
    T gcd(T,T);   
    fraction operator +(fraction  &obj) ;
    fraction operator -(fraction &obj) ;
    fraction operator *(fraction &obj);
    fraction operator /(fraction &obj);    
    void display();
};
#endif
