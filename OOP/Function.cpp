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

class teacher : public person
{
     public :
          void display(){
               cout << endl << " i am a teacher " << endl;
          }
};

class student : public person{
     public :
          void display(){
               cout << endl << " i am a student " << endl;
          }
};

int main()
{
     person p;
     p.display();

     teacher t;
     t.display();

     student s;
     s.display();

     getch();
}