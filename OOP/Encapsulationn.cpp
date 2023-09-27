#include<iostream>
#include<conio.h>
using namespace std;
class student
{
     private :
          int id;
          string name;
     public :
          void setvalue(int x, string y)
          {
              id = x;
              name = y;

          }
          string getvalue()
          {
              return id;
          }
          string getvalue1()
          {
            return name;
          }
};

int main()
{
     student s1;
     s1.setvalue("101", "jewel");
     cout << " Student ID : " << s1.getvalue() << endl;
     cout << " Student Name : " << s1.getvalue1() << endl;

     getch();
}
