#include<iostream>
#include<math.h>
using namespace std;
int main(int argument, char*a[])
{
int n;
if(argument==2)
{
    //atoi is a predefined function used to convert a string value to an integer value.
    n=atoi(a[1]);
}
else if(argument!=2)
{
    cout<<"Enter the value of n: ";
    cin>>n;
}
float sum=0.0;
float i=1;
while (i<=n)
{
    sum=sum+pow(-1,i+1)*(1.0/(i*i));
    i=i+1;
}
cout<<"The sum of the series, S = 1 - 1 / (2 ^ 2) + 1 / (3 ^ 3) -1 / (n ^ n) is: "<<sum<<endl;
 
    return 0;
}
