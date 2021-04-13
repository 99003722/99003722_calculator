#ifndef __OPERAIION_H_
#define __OPERAIION_H_
#include<iostream>
using namespace std;
template <typename I>
class operation
{
private :
      I num1;
      I num2;
      I a;
      I b;
      

public: 
    operation();
    operation(I n1,I n2);
    I add(I n1,I n2);
    
    I subtract(I n1,I n2);
    I multiply(I n1,I n2);
    I division(I n1,I n2);
       
};
#endif