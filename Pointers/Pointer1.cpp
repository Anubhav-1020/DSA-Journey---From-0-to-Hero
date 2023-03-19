/*This program will illustrate how pointers work on arrays and how does pointer arithmetic 
work.*/

/*Mathematically, the formula for pointer arithmetic can be given as: -

                Address(new) = Adress(current) + i * Size Of Data Type
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5], *ptr;
    for(int i = 0; i<5; i++)
    {
        cout << "ar[" << i << "] = ";
        cin >> ar[i];
    }
    ptr = ar;
    cout << *ptr << "\n";
    cout << *(ptr+1) << "\n";
    cout << *(ptr+2) << "\n";
    cout << *(ptr+3) << "\n";
    cout << *(ptr+4) << "\n";
}