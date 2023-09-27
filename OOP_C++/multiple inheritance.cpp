// Base class
#include<iostream>
#include<conio.h>
using namespace std;
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." << endl ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  getch();
}

