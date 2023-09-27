#include<iostream>
#include<conio.h>
using namespace std;

int addition(int a, int b)
{
     int sum = a+b;
     return sum;
}

int main()
{
     int result = addition(10,30);//cout <<addition(10,30) also work
     cout << "\vAddition Result : " <<result << endl;

     getch();
}