#include<iostream>
#include<conio.h>
using namespace std;

     // Public
/*class student 
{
     public :
        int id;
        string name;

        void display()
        {
             cout << endl << " ID : " << id << endl;
             cout << endl << " NAME : " << name << endl;
        }
};

int main()
{
     student s1;
     s1.id = 101;
     s1.name = "jewel";
     s1.display();

     getch();
}*/

class student
{
     private :
          int id;
          string name;
     public :
          void display()
          {
               cout << id << endl;
               cout << name << endl;
          }
};

int main()
{
     student obj;
     //s1.id = 101;
     obj.name = "jewel";
     obj.display();

     getch();
}