#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public :
        int id;
         double gpa;
     void display()
         {
              cout << endl << "Student ID : " << id << "  GPA " << gpa << endl;
         }

};

int main()
{
     student jack,zzz,dude;
      jack.id = 43251;
      jack.gpa = 3.88;
      jack.display();

      zzz.id = 155;
      zzz.gpa = 3.55;
      zzz.display();

      dude.id = 4532;
      dude.gpa = 3.9;
      dude.display();


getch();
}