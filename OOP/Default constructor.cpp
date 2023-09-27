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
            cout << endl << " Student ID : " << id <<" " << " GPA : "<< gpa << endl;
       }
       student(int x, double y)
       {
            id = x;
            gpa = y;

       }
       student()
       {
            cout << endl << " Default Constructor " << endl;
       }
};

int main()
{
     student ab;
     student aaa(645,3.88),bbb(1542,3.99),ccc(256,3.90);
     aaa.display();
     bbb.display();
     ccc.display();

     getch();
}