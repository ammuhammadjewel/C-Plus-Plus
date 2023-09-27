#include<iostream>
#include<conio.h>
using namespace std;

void display(int *num)

{
     *num = 20;    //pass by reference ,,,
     //num = 20;    pass by value....
}

int main()

{
     int x = 10;
     cout << endl << "Before calling the function x : " << x << endl;

     display(&x);    //pass by value = display(x),,value not change,,pass by reference = display(&x),,value change
     cout << endl << "After calling the function x : " << x << endl;

     getch();
}