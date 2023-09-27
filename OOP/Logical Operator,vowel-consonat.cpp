#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
      char ch;
      cout << "Enter the Letter :";
      cin >> ch;

      if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i'
      || ch=='I' || ch=='o' ||ch=='O'||ch=='u'||ch=='U')
      {
           cout << "vowerl";
      }
      else
      {
           cout << "consonant";
      }
      getch();
}