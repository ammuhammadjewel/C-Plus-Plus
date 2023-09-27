#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
     string str1 = "Aaaa";
     string str2 = " bbb";
     string str3;

     str3 = str1;
     cout << endl << " str3 : " << str3 << endl;

     str3 = str1 + str2;
     cout << endl << " str3 sum : " << str3 << endl;

     int len = str1.size();
     cout << endl << " length : " << len << endl;

     getch();
}