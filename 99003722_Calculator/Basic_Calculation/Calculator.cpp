#include"Calculator.h"
#include<iostream>
#include<string>
using namespace std;
template <typename I>
operation<I>::operation()
{}
template <typename I>
operation<I>::operation(I n1,I n2):num1(n1), num2(n2)
{}
template <typename I>
I operation<I>::add(I n1,I n2)
{    
    std::cout<<n1+n2<<endl;
    return n1+n2;
    
} 
template <typename I>
I operation<I>::subtract(I n1,I n2)
{   std::cout<<n1-n2<<endl;
    return n1-n2;
}
template <typename I>
I operation<I>::multiply(I n1,I n2)
{    std::cout<<n1*n2<<endl;
    return n1*n2;
}
template <typename I>
I operation<I>::division(I n1,I n2)
{   
    std::cout<<n1/n2<<endl;
    return n1/n2;
}

int main()
{
    operation<int> ob1;
    ob1.subtract(10,10);
}
