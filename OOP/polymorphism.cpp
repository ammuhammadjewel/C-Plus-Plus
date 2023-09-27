#include<iostream>
#include<conio.h>
using namespace std;

class person
{
     public :
          virtual void display()
          {
               cout << endl << " i am a person " << endl;
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

class student : public person{
     public :
     void display()
     {
          cout << endl << " i am a student " << endl;
     }
};

int main()
{
     person p;
     teacher t;
     student s;

     p.display();
     t.display();
     s.display();

     getch();
}

/*
int main()
{
     person *p;
     teacher t;
     student s;

     p = &t;
     p -> display();

     p = &s;
     p -> display();

     getch();
}*/