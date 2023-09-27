#include<iostream>
#include<conio.h>
using namespace std;

class F
{
private :
    int id = 101;
    string name = "aaaa";
public :
    friend class A;

};

class A
{
public :
    void display(F ob)
    {
        cout << " ID = " << ob.id << endl;
        cout << " Name = " << ob.name << endl;
    }

};

int main()

{
    F e;
    A b;
    b.display(e);
    getch();
}
