#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a,int b)

{
     int add = a+b;
     cout << endl <<"Sum of 2 Number : "<< add << endl;
     //cin >> a >> b;
}

void sum(int a,int b, int c)

{
     int add = a+b+c;
     cout << endl << "Sum of 3 Number : " << add << endl;
     //cin >> a >> b >> c;
}

int main()

{
     sum(20,65);
     sum(65,45,98);

     getch();
}