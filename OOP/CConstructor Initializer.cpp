#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public :
          const int admissionFee;    //const int admissionFee;
          const int examFee;        //const int examFee;
          int id;

      student(int x, int y, int z)      // : admissionFee(x), examFee(y);
      : admissionFee(x), examFee(y)

     {
     cout << endl << " Admission Fee = " << x << endl;
     cout << endl << " exam Fee = " << y << endl;
     cout << endl << " ID = " << z << endl;
     }


};

int main()
{
     student s1(25000,5000,444);

     getch();
}
