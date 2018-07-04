#include <iostream>
#include <fstream>
using namespace std;
typedef struct image 
{
    char ** access;
} im;
#define imPtr(im, x, y) &(im->access[y][x])
int main()
{
    ifstream fin("a.exe",ios::in|ios::binary);
    if(!fin)
    {
        cout << "File open error !\n";
        return 1;
    }
    //ofstream fout("b.exe",ios::binary);
    //char c[1024];
    im *a = new im;
    while(!fin.eof())
    {
        fin.read((char *)imPtr(a, 0, 0),sizeof(a));
        //fout.write(c,fin.gcount());
    }
    //fin.close();
    //fout.close();
    char b = a->access[0][0];
    printf("%c\n",b);
    delete a;
    cout << "Copy over ! \n";
    fin.close();
    
}
