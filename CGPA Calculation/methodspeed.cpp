#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class car
{
     public :
      int speed(int maxspeed);


};

int car::speed(int maxspeed)
{
     return maxspeed;
}
int main ()
{
     car myobj;
     cout << myobj.speed(300km) << endl;

     getch();
}
