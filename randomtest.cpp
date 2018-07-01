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
    int a = random();
    unsigned char b =  getrandom();
    printf("%u\n",a);
}