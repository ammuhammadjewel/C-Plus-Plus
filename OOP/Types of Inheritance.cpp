#include<iostream>
#include<conio.h>
using namespace std;

class person
{
     public :
          void display()
          {
               cout << endl << " i am a person " << endl;
          }
};
class student : public person 
{
     public :
          void display()
          {
               cout << endl << " i am a student " << endl;
          }
};

class teacher : public person
{
     public :
          void display()
          {
               cout << endl << " i am a teacher " << endl;
          }
};

class dean : public student
{
     public :
          void display()
          {
               cout << endl << " i am a dean " << endl;
          }

};

int main()
{

     person s1;
     s1.display();

     student s2;
     s2.display();

     teacher s3;
     s3.display();

     dean s4;
     s4.display();

     getch();
}