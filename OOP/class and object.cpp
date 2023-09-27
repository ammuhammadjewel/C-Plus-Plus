#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public :
        int id;
         double gpa;

};

int main()
{
     student jack,zzz,dude;
      jack.id = 43251;
      jack.gpa = 3.88;
      cout << endl << "Jack ID : " << jack.id << "  GPA : " << jack.gpa << endl;

      zzz.id = 43251;
      zzz.gpa = 3.88;
      cout << endl << "zzz ID : " << zzz.id << "  GPA : " << zzz.gpa << endl;

      dude.id = 43251;
      dude.gpa = 3.88;
      cout << endl << "dude ID : " << dude.id << "  GPA : " << dude.gpa << endl;


getch();
}