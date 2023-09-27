#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

class cat : public Animal{
     public :
       void animalSound(){
            cout << " the Cat says : mew mew \n";
       }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  cat mycat;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  mycat.animalSound();
  getch();
}