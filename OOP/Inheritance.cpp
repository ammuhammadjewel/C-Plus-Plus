#include<iostream>
using namespace std;

class person
{
     public :
          string name;
          int age;
          void display()
          {
               cout << endl << " Name : " << name << endl;
               cout << endl << " Age : " << age << endl;
          }
};

class student : public person
{
     public : 
          int id;
          void display1()
          {
               display();
               cout << endl << " ID : " << id << endl;

          }
};

int main()
{

     student s2;
     s2.name = " bbbb";
     s2.id = 102;
     s2.age = 30;
     s2.display1();

     return 0;
}