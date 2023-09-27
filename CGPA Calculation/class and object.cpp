#include<iostream>
#include<conio.h>
using namespace std;

class myclass

{
    public:

       int mynum;
       string mystring;

};

int main ()

{
    myclass myobj;
    myobj.mynum = 15;
    myobj.mystring = "some text";

    cout << "1st number : " << myobj.mynum << endl;
    cout << "Text : " << myobj.mystring << endl;

    getch();

}