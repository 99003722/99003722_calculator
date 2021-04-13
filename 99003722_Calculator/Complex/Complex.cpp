#include<iostream>
#include"Complex.h"
#include<math.h>
using namespace std;
template<typename P>
complex<P>::complex()
{
    real=0;
    imaginary=0;
};
template <typename P>
complex<P>::complex(P x,P y):real(x),imaginary(y)
{};
template<typename P>
complex<P>complex<P>::operator/(complex<P>&obj)
{
    complex<P> c3;
    P denominator;
    denominator=obj.real*obj.real+obj.imaginary*obj.imaginary;
    P T1;
    P T2;
    T1 = real*obj.real+imaginary*obj.imaginary;
    T1 = T1/denominator;
    T2 = imaginary*obj.real-real*obj.imaginary;
    T2 = T2/denominator;
    c3.real=T1;
    c3.imaginary=T2;
    return c3;

};
template<typename P>
complex<P>complex<P>::operator*(complex<P>&obj)
{
complex<P> c3;
c3.real=(real*obj.real)-(imaginary*obj.imaginary);
c3.imaginary=(real*obj.imaginary+imaginary*obj.imaginary);
return c3;
};
template<typename P>
complex<P>complex<P>::operator-(complex<P>&obj)
{
   complex<P> c3;
   c3.real=real-obj.real;
   c3.imaginary=imaginary-obj.imaginary;
   return c3;
};
template<typename P>
complex<P>complex<P>::operator+(complex<P>&obj)
{
    complex<P> c3;
    c3.real=real+obj.real;
    c3.imaginary=imaginary+obj.imaginary;
    return c3;
};
template<typename P>
void complex<P>::display()
{
    cout<<"Real "<<real<<" "<<"Imaginary "<<imaginary;
}
int main()
{
    complex<int> obj1(10000,20);
    complex<int> obj2(1,20);
    complex<int> obj3;
    obj3=obj1/obj2;
    obj3.display();
}