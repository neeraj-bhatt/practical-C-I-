#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd_recur(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd_recur(a-b, b);
    return gcd_recur(a, b-a);
}
//gcd without recursion
void gcd(int* a, int* b)
{
    while(*a != *b)
    {
        if(*a > *b)
            *a -= *b;
        else if(*a < *b)
            *b -= *a;
    }
}
int main()
{
    int a = 100, b = 56;
    int c = a, d = b;
    cout<<"GCD of "<<a<<" and "<<b<<" is (with recursion) "<<gcd_recur(a, b) << endl << endl;
    
    if(a == 0)
        cout << "GCD of "<<a<<" and "<<b<<" is (without recursion) " << b << endl;
    else if(b == 0)
        cout << "GCD of "<<a<<" and "<<b<<" is (without recursion) "<< a << endl;
    else
    {
        gcd(&c, &d);
        cout << "GCD of "<<a<<" and "<<b<<" is (without recursion) "<< c << endl;
    }
    return 0;
}