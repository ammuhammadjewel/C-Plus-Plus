#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
      char ch;
      cout << "Enter the Letter :";
      cin >> ch;
      ch = tolower(ch);

      if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'||ch=='u')
      {
           cout << "vowerl";
      }
      else
      {
           cout << "consonant";
      }
      getch();
}