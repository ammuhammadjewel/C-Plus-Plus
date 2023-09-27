#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()

{
     while(1)
     {
               int guessNumber,randomNumber;

     cout << endl << "Enter your guess Number between 1 to 5 : ";
     cin >> guessNumber;

     randomNumber = 1 + rand()%5;

      if(guessNumber == randomNumber)
      {
           cout << "You have Won" << endl << endl;
      }
      else 
      {
           cout << "You have lost. Try Again " << endl;
           cout << "RandomNumber was : " << randomNumber <<endl << endl;

      }

}getch();
     }
