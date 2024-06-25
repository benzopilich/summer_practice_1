#include <iostream>
#include "Unik_head.h"
using namespace std;

Solution::Nod(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    int r=a%b;
    return Nod(b,r);
}
