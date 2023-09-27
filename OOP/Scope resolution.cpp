#include<iostream>
#include<conio.h>
using namespace std;

int x = 10;    //global variable acces ::

int main()
{
     int x = 20;     //local variable
     //::x = 30;       //global variable
     //cout << endl << x << endl;      local variable acces
     cout << endl << ::x << endl;     //global variable acces

     getch();

}