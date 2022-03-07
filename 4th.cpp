#include <bits/stdc++.h>
using namespace std;

void menu()
{
    cout << endl << "1 - Show address of each character in string." << endl;
    cout << "2 - Concatenate two strings." << endl;
    cout << "3 - Compare two strings." << endl;
    cout << "4 - Calculate length of the string." << endl;
    cout << "5 - Convert all lowercase characters to uppercase." << endl;
    cout << "6 - Reverse the string." << endl; 
}
void result(int choice, string str1, string str2)
{
    switch(choice)
    {
        case 1:
        {
            cout << "Enter a string" << endl;
            cin.sync();
            getline(cin, str1);
            for(int i=0; str1[i]!='\0'; i++)
                cout << "Address at index " << i << " = "<< (void*) str1[i] << endl;
            break;
        }
        case 2:
        {
            cout << "Enter 1st string" << endl;
            cin.sync();
            getline(cin, str1);
            cout << "Enter 2nd string" << endl;
            cin.sync();
            getline(cin, str2);
            cout << str1 + " " + str2;
            break;
        }
        case 3:
        {
            cout << "Enter 1st string" << endl;
            cin.sync();
            getline(cin, str1);
            cout << "Enter 2nd string" << endl;
            cin.sync();
            getline(cin, str2);
            if(str1 != str2)
            {
                if(str1 > str2)
                    cout << "String1 is greater than string2" << endl;
                else
                    cout << "String1 is smaller than string2" << endl;
            }
            else
                cout << "String1 and String2 are equal" << endl;
            break;
        }
        case 4:
        {
            cout << "Enter a string" << endl;
            cin.sync();
            getline(cin, str1);
            cout << "Length of string is " << str1.size();
            break;
        }
        case 5:
        {
            cout << "Enter a string" << endl;
            cin.sync();
            getline(cin, str1);
            transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
            cout << str1 << endl;
            break;
        }
        case 6:
        {
            cout << "Enter a string" << endl;
            cin.sync();
            getline(cin, str1);
            str2 = str1;
            int n = 0;
            for(int i=(str1.size() - 1); i>=0; i--)
            {    
                str2[n] = str1[i];
                n++;
            }
            cout << str2 << endl;
            break;
        }
        default:
            cout << "--------Wrong Input--------" << endl;
            break;
    }
}
int main()
{
    string str1, str2;
    int choice = 0;
    menu();
    cin >> choice;
    result(choice, str1, str2);

    return 0;
}