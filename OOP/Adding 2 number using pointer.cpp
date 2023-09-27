#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int num1; 
     int num2; 
     cout <<"Enter the number 1 : " <<" ";
     cin >> num1;
     cout << "Enter the number 2 : ";
     cin >> num2;

     int *p1, *p2, sum;

     p1 = &num1;
     p2 = &num2;

     sum = *p1 + *p2;

     cout << "\vSum : " << sum;

     getch();
}