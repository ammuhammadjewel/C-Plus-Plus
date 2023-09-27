#include<iostream>
using namespace std;

class MyFirstClass
{
     public :
          void Display();
};

void MyFirstClass :: Display()
{
     cout << endl << "Inside the Display " << endl;
}

int main()
{
     MyFirstClass obj;
     obj.Display();
     /*pointer call
     MyFirstClass *p = &obj;
     p -> Display();*/
     cout << endl;

     return 0;
}
