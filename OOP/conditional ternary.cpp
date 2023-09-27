#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int num1,num2;
     cout << "Enter number 1 : ";
     cin >> num1;
     cout << "Enter number 2 : ";
     cin >> num2;

     int max = (num1>num2) ? num1 : num2;
     cout << "Max number : " << max << endl;

     getch();
}