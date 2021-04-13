#ifndef __COMPLEX_H_
#define __COMPLEX_H_
#include<iostream>
#include<stdlib.h>
using namespace std;
template <typename T>
class complex
{   
   T real;   
   T imaginary;
   public:
   complex();
   complex(const T ,const T );
   complex operator +(complex  &obj) ;
   complex operator -(complex &obj) ;
   complex operator *(complex &obj);
   complex operator /(complex &obj);    
   void display();  

};


#endif
