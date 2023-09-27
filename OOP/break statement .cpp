#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     //for(int i=1;i<=100;i+=2)
     for(int i=1;i<=100;i+=2)
     //for(int i=1;i<=100;i++)
     //for(int i=1;i<=100;i++)
     
     {
     if(i==10)
     {
          //break;
          continue;     ///oniy for loop  but not for switch 
     }
     cout << i <<endl;

     }
  getch();
}