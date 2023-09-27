#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int x = 5;
     int *p;

     p = &x;

     cout << x << endl;
     cout << &x << endl;
     cout << p << endl;
     cout << &x << endl;


     getch();
}