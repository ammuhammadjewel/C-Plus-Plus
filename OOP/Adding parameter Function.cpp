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

         void setValue(int x, double y)
         {
              id = x;
              gpa = y;
         }

};

int main()
{
     student jack,zzz,dude;
      jack.setValue(1515,3.98);
      jack.display();

      zzz.setValue(622,3.88);
      zzz.display();

      dude.setValue(545,3.99);
      dude.display();


getch();
}