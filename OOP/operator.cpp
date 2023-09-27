//How to work operator
#include<iostream>
#include<conio.h>
#include<iomanip>  //when setprecision use ;
using namespace std;
int main ()

{
            float num1,num2;



            cout << " Enter the Number :" <<endl;
             cin >> num1 >> num2;


            cout << showpoint << endl;
            cout << fixed;
            cout << setw(25);
            cout << setprecision(2)<<endl;



            float sum = num1 + num2;
            cout << setw(25)<< " summation = "<< sum << endl;
             cout << endl;

            float sub = num1 - num2;
            cout << setw(25)<< " Subtraction = "<< sub << endl;
            cout << endl;
            cout << noshowpoint;
            float mul = num1 * num2;
            cout << setw(25)<< " Multiplication = "<< mul << endl;
            cout << endl;

            double div = (float) num1 / num2;
            cout << setw(25)<< "Division = "<< div << endl;
             cout << endl;
            //rem = num1 % num2;

            //cout << "Summation = "<< sum <<endl << "Subtraction = "<< sub << endl << "Multiplication = " << mul << endl << "Division =" << div << endl; //<< "remainder = " << rem << endl;

            getch ();
}
