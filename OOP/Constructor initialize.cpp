#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public :
          int admissionFee;    //const int admissionFee;
          int examFee;      //const int examFee;
          int id;

      student(int x, int y, int z)//, int y)      // : admissionFee(x), examFee(y);
     {
     cout << endl << " Admission Fee " << x << endl;
     cout << endl << " exam Fee " << y << endl;
     cout << endl << " ID = " << z << endl;
     }

};

int main()
{
     student s1(25000,5000,555);
     //student s2(500);

     getch();
}