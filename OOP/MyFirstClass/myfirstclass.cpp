#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass :: MyFirstClass()
{
    cout << endl << "\tInside the constructor " << endl;
}

MyFirstClass :: ~MyFirstClass()
{
    cout << endl << "\tInside the Destructor " << endl;
}

void MyFirstClass :: Display()
{
    cout << endl << "\t Inside the Display " << endl;
}
