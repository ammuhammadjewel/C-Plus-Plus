#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()

{
      cout << setw(15);
     cout << setw(15)<< "\tEnter the Number : " << endl;

    int x,y;

    x = 3;
    y = 2;

    x += y;           //x=x+y  =  x = 5;

    cout <<setw(27)<< x << endl;



    getch();
}
