#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
     char name[20];

     cout << endl << "Enter your name : ";
     gets(name);

     cout << endl << "Welcome " << name << endl;

     getch();
}