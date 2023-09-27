#include<iostream>
#include<conio.h>
using namespace std;

class student
{
     public :
          int roll;
          void display()
          {
               cout << endl << " Student Roll number " << roll << endl;
          }
      private :
          string name;
      public :
        void setname(string n){
            name = n;
          }
          string getname(){
              return name;
          }
      protected :
          float gpa;

          public :
               void setgpa(float g){
                    gpa = g;
               }
               float getgpa(){
                    return gpa;
               }
};

int main()
{
     student s1;
     s1.setname("aaaa");
     s1.roll = 101;
     s1.setgpa(3.39);
     s1.display();
     cout << endl << " Your gpa number = " << s1.getgpa() << endl;
     cout << endl << " Student name = " << s1.getname() << endl;

     getch();
}