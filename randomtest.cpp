#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//宏定义产生0-255之间的unsigned char
int getrandom()
{
srand(time(NULL));
return rand()%(255+1);
}

#define random()(getrandom())
int main()
{
    srand(time(NULL));
    unsigned char f = (unsigned char)rand();
    printf("%u\n",f);
    int a = random();
    unsigned char b =  getrandom();
    printf("%u\n",a);
}