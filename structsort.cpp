#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

typedef struct  
{
    float w;
    int a,b;
} edge;
bool operator<(const edge &a, const edge &b) {
  return a.w < b.w;
}
int main()
{
    edge *ed = new edge[10];
    for (int i =0 ;i<10;i++)
    {
        ed[i].w = 10/(i+1);
        ed[i].a = i+1;
        ed[i].a = i+2;
    }
    sort(ed,ed+10);
    for(int i = 0;i<10;i++)
    {
        printf("%f\n",ed[i].w);
    }
    return 0;
}