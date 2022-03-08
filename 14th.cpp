#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2;
    char ch;
    f1.open("14_File_1.txt");
    if(!f1)
    {
        cout<<"Error in opening read file!!";
        exit(99);
    }
    f2.open("File_2.txt");
    if(!f2)
    { 
        cout<<"Error in opening a file!!";
        exit(100);
    }
    cout<<"Whitespace successfully removed check File_2\n";
    while(f1.get(ch))
    {
        if(ch!=' '&&ch!='\t'&&ch!='\n' )
        f2.put(ch);
    }
    f1.close();
    f2.close();
    cout<<":)";
    return 0;
}
