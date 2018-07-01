#include <iostream>
#include <fstream>
using namespace std;
typedef struct image 
{
    int ** access;
}*im;
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
    im a;
    a->access = new int*[4];

    while(!fin.eof())
    {
        fin.read((char *)imPtr(a, 0, 0),4);
        //fout.write(c,fin.gcount());
    }
    fin.close();
    //fout.close();
    cout<<a<< endl;
    delete [] a->access;
    cout << "Copy over ! \n";
}
