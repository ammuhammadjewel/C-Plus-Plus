#include<iostream>
#include<conio.h>
using namespace std;

/*void Addition(int, int);
void Subtraction(int, int);
void Multiplication(int, int);
void Division(int, int);
void Average(int, int);

int main()
{
     Addition(10,30);
     Subtraction(20,25);
     Multiplication(27,32);
     Division(45,43);
     Average(51,53);

     cout <<"\vAll result printed";


     getch();
};
*/


void Addition(int a, int b)
{
     int add = a+b;
     cout <<"Addition Result : " << add << endl;
}

void Subtraction(int a, int b)
{
     int sub = a-b;
     cout <<"Subtraction Result : " <<sub << endl;
}
void Multiplication(int a, int b)
{
     int mul = a*b;
     cout <<"Multiplication Result : " <<mul << endl;
}
void Division(int a, int b)
{
     float div =(float)a/b;
     cout <<"Division Result : " <<div << endl;
}
void Average(int a, int b)
{
     int avg = a+b/2;
     cout <<"Average Result : " <<avg << endl;
}

int main()
{
     Addition(10,30);
     Subtraction(20,25);
     Multiplication(27,32);
     Division(45,43);
     Average(51,53);

     cout <<"\vAll result printed";


     getch();
};