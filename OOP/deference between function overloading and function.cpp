#include<iostream>
#include<conio.h>
using namespace std;

class overload
{
     public :
          void add(int a, int b)
          {
               cout << endl << " Addition of two number = " << a+b << endl;
          }
          void add(int a, int b, int c)
          {
               cout << endl << " Addition of three number = " << a+b+c << endl;
          }
          void add()
          {
               cout << endl << " Nothing to Add " << endl;
          }
};

int main()
{

     overload s1;
     s1.add(12,12);
     s1.add(13,13,13);
     s1.add();

     getch();
}