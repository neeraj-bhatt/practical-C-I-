#include <iostream>
#include <cstring>
using namespace std;
class Person
{
  public:
  string name;
  void get();
  void display();
};
void Person::get()
{
    cout<<"Enter name of the employee: ";
    getline(cin,name);
}
void Person::display()
{
    cout<<"Name of the employee is: ";
    cout<<name;
}
class Student: public Person
{
    public:
    int cls;
    int rollno;
    public:
    void get();
    void display();
};
 
void Student::get()
{
    cout<<"Enter class of the employee: ";
    cin>>cls;
    cout<<"Enter Roll number of employee: ";
    cin>>rollno;
}
void Student::display()
{
    cout<<"\nClass of the employee is: "<<cls<<endl;
    cout<<"Roll number of the employee is: "<<rollno<<endl;
}
 
class Employee: public Person
{
    public:
    int salary;
    int id;
    public:
    void get();
    void display();
};
void Employee::get()
{
    cout<<"Enter salary of the employee: ";
    cin>>salary;
    cout<<"Enter id of the employee: ";
    cin>>id;
}
void Employee::display()
{
    cout<<"\nSalary of the employee is: "<<salary<<endl;
    cout<<"Id of the employee is: "<<id<<endl;
}
 
int main()
{
    Person p1;
    Employee e1;
    Student s1;
    p1.get();
    e1.get();
    e1.display();
    cout<<endl;
    s1.get();
    s1.display();
    return 0;
}
