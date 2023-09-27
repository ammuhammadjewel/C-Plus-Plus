#include<iostream>
using namespace std;

class MyClass
{
     public :
          void Display() const;
          void Display1();
};

void MyClass :: Display() const
{
     cout << endl << " Constant Function " << endl;
}

void MyClass :: Display1()
{
     cout << endl << " Non-Constant Function  " << endl;
}

int main()
{
     const MyClass obj;
     obj.Display();

     MyClass obj1;
     obj1.Display1();
     cout << endl;

     return 0;

}