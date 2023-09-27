/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class car
{
public :
     string brand;
     //cin >> brand;
     string model;
     //cin >> model;
     int year;
     //cin >> year;

};
int main()
{
     car carobj;
     carobj.brand = "bmw";
     carobj.model = "x4";
     carobj.year = 1999;

     car carobj1;
     carobj1.brand = "bmw";
     carobj1.model = "x4";
     carobj1.year = 1999;

     car carobj2;
     carobj2.brand = "bmw";
     carobj2.model = "x4";
     carobj2.year = 1999;

     cout << carobj.brand <<" " << carobj.model << " " << carobj.year << endl;
     cout << carobj1.brand <<" " << carobj1.model << " " << carobj1.year << endl;
     cout << carobj2.brand <<" " << carobj2.model << " " << carobj2.year << endl;

     getch();
}*/


#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class myclass
{
    public :

     int mynum;
     string mystring;
};
int main()
{
     myclass myobj;
     myobj.mynum = 15;
     myobj.mystring = "some tex";

     cout << myobj.mynum << " " << myobj.mystring << endl;

     getch();
}