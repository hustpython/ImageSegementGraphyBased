#include <iostream>
#include <fstream>
using namespace std;
typedef struct image 
{
    int ** access;
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
    a->access = new int*[30];

    while(!fin.eof())
    {
        fin.read((char *)imPtr(a, 0, 0),30);
        //fout.write(c,fin.gcount());
    }
    //fin.close();
    //fout.close();
    cout<<(a->access)[1][1]<< endl;
    delete a;
    cout << "Copy over ! \n";
    fin.close();
    
}
