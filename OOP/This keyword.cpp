#include<iostream>
using namespace std;

class student
{
     public :
       string name;

       student(string name)
       {
            this -> name = name;
       }
       void display()
       {
            cout << endl << " Name is " << name << endl;
       }
};

int main()
{
     student s1("ssss");
     s1.display();

     return 0;

}