#include <iostream>
using namespace std;
int main()
{
    double a,b,quotient;
    cout<<"Enter the numerator: ";
    cin>>a;
    cout<<"Enter the denominator: ";
    cin>>b;
    try
    {
        if(b==0)
        throw"Attempt to divide by zero"; 
        quotient=a/b;
        cout<<"The quotient is: "<<quotient<<endl;
    }
    catch(const char* p)
    {
        cout<<p<<endl;
    }
    cout<<"\nEnd of the main function!!"<<endl;
    return 0;
}
