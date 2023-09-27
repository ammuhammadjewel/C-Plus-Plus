#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int num;
     cout << "Enter number : ";
     cin >> num;


     (num%2==0) ? cout << num << " is even" <<endl :  cout << num << " is odd" <<endl;

     getch();
}