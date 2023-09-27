#include<iostream>
#include<conio.h>
using namespace std;

template<class mytemplate>
mytemplate add(mytemplate a, mytemplate b)
{
    return a+b;
}

int main()
{
    cout << add(10.5,11.1) << endl;
    cout << add(10,11) << endl;

    getch();
}

/*int add(int a, int b){return a+b;}

int main()
{
    cout << add(10,20) << endl;
    cout << add(20,30) << endl;

    getch();
}*/
