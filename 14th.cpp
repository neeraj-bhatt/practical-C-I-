#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2;
    char ch;
    f1.open("C:\\Users\\22sho\\OneDrive\\Desktop\\C++\\helloworld\\prog1\\program1\\File 1.txt");
    if(!f1)
    {
        cout<<"Error in opening read file!!";
        exit(99);
    }
    f2.open("C:\\Users\\22sho\\OneDrive\\Desktop\\C++\\helloworld\\prog1\\program1\\File 2.txt");
    if(!f2)
    { 
        cout<<"Error in opening a file!!";
        exit(100);
    }
    cout<<"write text\n";
    while(f1.get(ch))
    {
        if(ch!=' '&&ch!='\t'&&ch!='\n' )
        f2.put(ch);
    }
    f1.close();
    f2.close();
    cout<<"end";
    return 0;
}
