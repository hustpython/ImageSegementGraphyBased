#include <iostream>
#include <stdio.h>
using namespace std;

#define GET_FUN(name,fun) \
int get_ ## name (int x) {return x*(fun);}
GET_FUN(square,x+1);

int main()
{
    printf("%i",get_square(2));
    return 0;
}
