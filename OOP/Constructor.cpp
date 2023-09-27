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

     student(int x, double y)
         {
              id = x;
              gpa = y;
         }

};

int main()
{
     student jack(1515,3.98),zzz(622,3.88),dude(545,3.99);
      jack.display();
      zzz.display();
      dude.display();

getch();
}