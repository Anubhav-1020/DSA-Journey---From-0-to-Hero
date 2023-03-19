/*This is a basic implementation of pointers in C++. Pointers are those variables that store the
address of another variable.*/

/*We use the asterisk(*) operator to declare a pointer. Also, to store the address of another
variable we use the ampersand (&) operator.*/

/*To know what value is being stored by the pointer variable we have to dereference it. We do
that with the help of asterisk (*) operator.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5, *ptr;
    ptr = &x;
    cout << &x << "\n";  //Memory address of the variable
    cout << ptr << "\n";  //Memory address stored by the variable ptr
    cout << *ptr << "\n";  //Dereferencing the pointer to obtain the value stored in memory
                            //address stored in ptr
    cout << &ptr << "\n";  //Memory address of the pointer variable 

    return 0;
}