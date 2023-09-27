#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class myclass

{
     public :
      void mymethod();

};
void myclass::mymethod()
{
     cout << "Hello My World ! " <<endl;
}

int main ()

{
     myclass myobj;
     myobj.mymethod();

     getch();
}