#include "Fraction.h"
#include <iostream>
using namespace std;
template<typename P>
fraction<P>::fraction()
{
    numerator=0;
    denominator=0;
};
template<typename P>
fraction<P>::fraction(P x,P y):numerator(x),denominator(y)
{};
template<typename P>
P fraction<P>::gcd(P x,P y)
{
    if (x == 0)
        return y;
    return gcd(y % x, x);
}
template<typename P>
fraction<P>fraction<P>::operator+(fraction<P>&obj)
{
    fraction<P> c3;
    P lcm;
    P nume;
    lcm=denominator*obj.denominator;    
    nume=(lcm/denominator)*numerator+(lcm/obj.denominator)*obj.numerator;   
    
    P common_factor = gcd(nume,lcm);
    c3.denominator = lcm / common_factor;
    c3.numerator = nume / common_factor; 
    return c3;
};
template<typename P>
fraction<P>fraction<P>::operator-(fraction<P>&obj)
{
    fraction<P> c3;
    P lcm;
    P nume;
    lcm=denominator*obj.denominator;    
    nume=(lcm/denominator)*numerator-(lcm/obj.denominator)*obj.numerator;   
    P common_factor = gcd(nume,lcm);
    c3.denominator = lcm / common_factor;
    c3.numerator = nume / common_factor; 
    return c3;
};
template<typename P>
fraction<P>fraction<P>::operator*(fraction<P>&obj)
{
    fraction<P> c3;
    P lcm;
    P nume;
    lcm=denominator*obj.denominator;    
    nume=numerator*obj.numerator;   
    P common_factor = gcd(nume,lcm);
    c3.denominator = lcm / common_factor;
    c3.numerator = nume / common_factor; 
    return c3;
};
template<typename P>
fraction<P>fraction<P>::operator/(fraction<P>&obj)
{
    fraction<P> c3;
    P lcm;
    P nume;
    lcm=denominator*obj.numerator;    
    nume=numerator*obj.denominator;
    P common_factor = gcd(nume,lcm);
    c3.denominator = lcm / common_factor;
    c3.numerator = nume / common_factor; 
    return c3;
};



template<typename P>
void fraction<P>::display()
{
    cout<<"Numerator="<<numerator<<endl;
    cout<<"denominator="<<denominator<<endl;
};
int main()
{
    fraction<int> c1(2,2);
    fraction<int> c2(1,2);
    fraction<int> c3;
    c3=c1/c2;
    c3.display();

}

