#include<iostream>
#include<conio.h>
using namespace std;
int main()

/*{
     char ch;
     cout << "Enter any Letter : ";
     cin >> ch;

     switch(ch)
     {
       case 'a' :
          cout << "vowel" << endl;
          break;

       case 'e' :
          cout << "vowel" << endl;
          break;

       case 'i' :
          cout << "vowel" << endl;
          break;

       case 'o' :
          cout << "vowel" << endl;
          break;

       case 'u' :
          cout << "vowel" << endl;
          break;

       default :
          cout <<"consonant" <<endl;
          break;
     }getch();
}*/

{
     char ch;
      cout << "Enter any letter : ";
      cin >>ch;

      ch = tolower(ch);

      switch(ch)
      {
           case 'a' :
           case 'e' :
           case 'i' :
           case 'o' :
           case 'u' :
             cout <<"Vowel" << endl;
             break;

           default :
             cout << "consonant" << endl;

      }getch();
}