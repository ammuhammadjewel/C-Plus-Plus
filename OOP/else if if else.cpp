#include<iostream>
#include<conio.h>
using namespace std;

int main ()

{
    int num;
    cout << " Enter any Number : ";
    cin >> num;

    if(num>0)
    {
        cout << " Number is Positive " << endl;
    }

   else if(num<0)
    {
        cout << " Number is Negative " << endl;
    }

   else 
    {
        cout << " Number is Zero " << endl;
    }

    getch();

}
