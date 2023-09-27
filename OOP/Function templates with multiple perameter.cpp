#include<iostream>
#include<conio.h>
using namespace std;

template<class mytemplate1, class mytemplate2>
mytemplate1 add(mytemplate1 a, mytemplate2 b)
{
    return a+b;
}

int main()
{
    cout << add(10.5,10) << endl;
    //cout << add(11.5,12) << endl;

    getch();
}
