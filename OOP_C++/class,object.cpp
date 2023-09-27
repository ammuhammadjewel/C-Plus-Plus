#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
//Inside Example
class myclass
{
     public :
       int mynum;
       string mystring;

};

int main ()
{
     myclass myobj ;

     myobj.mynum = 15;
     myobj.mystring = "currect";


     cout << myobj.mynum << endl << "result : ";
     cout << myobj.mystring << endl << "print : ";
     
     getch();

}

//Outside Example
/*class car

{
     public : 
       string brand;
       string model;
       int year;
};

int main ()

{
     car carobj1;
     carobj1.brand = "BMW";
     carobj1.model = "x5";
     carobj1.year = 1999;    //creat an object of car

     //create onather object of car
     car carobj2;
     carobj2.brand = "ford";
     carobj2.model = "mustang";
     carobj2.year = 1969;

     //one more object create

     car carobj3;
       carobj3.brand = "MB";
       carobj3.model = "x";
       carobj3.year = 2012;

     cout << carobj1cout.brand << " " << carobj1.model << " " << carobj1.year << "1st Car details : " << endl;
     cout << carobj2cout.brand << " " << carobj2.model << " " << carobj2.year << "2nd Car details : " << endl;
     cout << carobj3cout.brand << " " << carobj3.model << " " << carobj3.year << "3rd Car details : " << endl;
     

     getch();

}*/

