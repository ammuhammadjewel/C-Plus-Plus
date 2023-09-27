#include<iostream>
using namespace std;

class MyFirstClass
{
     public :
       MyFirstClass();
       ~MyFirstClass();
       void Display();
};

MyFirstClass :: MyFirstClass()
{
     cout << endl << "Inside the class " << endl;
}

MyFirstClass :: ~MyFirstClass()
{
     cout << endl << "Inside the class " << endl;
}

void MyFirstClass :: Display()
{
     cout << endl << "Inside the Display " << endl;
}

int main()
{
     MyFirstClass obj;
     obj.Display();

     return 0;
}

