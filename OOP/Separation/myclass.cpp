#include "myclass.h"
#include<iostream>
using namespace std;

MyClass::MyClass()
{
    cout << endl << "\tInside the constructor " << endl;
}


void MyClass :: Display()
{
    cout << endl << "\tInside the display " << endl;
}
