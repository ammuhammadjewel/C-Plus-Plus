#include<iostream>
#include<conio.h>
using namespace std;

class abstraction
{
public :
    //void call(){cout << " Hello " << endl;}
    virtual void sendmessage() = 0;
};

class bbb : public abstraction
{
public :
    void sendmessage(){cout << " bbbb " << endl;}
};

class ccc : public abstraction
{
public :
    void sendmessage(){cout << " cccc " << endl;}
};


int main()
{
    abstraction *a;
    bbb b;
    ccc c;

    a = &b;
    //a->call();
    a->sendmessage();

    a = &c;
    a->sendmessage();

     getch();
}
