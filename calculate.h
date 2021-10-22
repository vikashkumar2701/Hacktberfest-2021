#include<bits/stdc++.h>
using namespace std;
template<class x> //x is data type indentify by the compiler
class calculator
{
    x a;
    x b;
    public:
    calculator()
    {
        a=12;
        b=36;
    }
    calculator(x a,x b)
    {
        this->a=a;
        this->b=b;
    }
    x add() const
    {
        return a+b;
    }
    x sub() const
    {
        if(a>b)   return a-b;
        else      return b-a;
    }
    x multiply() const
    {
        return a*b;
    }
    x divide()  const
    {
        if(a>b) return a/b;
        else    return b/a;
    }
    x greater1()  const
    {
        if(a>b)   return a;
        else      return b;
    }
};
