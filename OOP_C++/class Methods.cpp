//Inside example
/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class myclass
{
    public :
      void mymethod()
      {
           cout << "King" << endl;
      }
};

int main()
{
     myclass myobj;
     myobj.mymethod();

     getch();
}*/

//Outside Example
/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class myclass
{
     public :
      void mymethod();

};
void myclass::mymethod()
{
     cout << "king" << endl;
}
int main()
{
     myclass myobj;
     myobj.mymethod();

     getch();
}*/

//Parameter
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
int main()
{
     car myobj;
     cout << myobj.speed(1000) << endl;

     getch();
}