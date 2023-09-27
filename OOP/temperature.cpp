#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()

{
    double farn,cels,k;

    cout << "Enter Celsius : " << endl;

    cin >> cels;

    farn = 1.8 * cels + 32;

    k = cels + 273;

    cout << setw(15)<< "Fahrenheit : " << farn << endl << setw(15)<< "Kalvin : " << k << endl;

    getch ();
}
