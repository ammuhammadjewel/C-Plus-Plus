#include<iostream>
#include<cstdlib>    //<stdlib.h>
#include<conio.h>
using namespace std;
int main()

{
     for(int i=1; i<5; i++)
     {
     int randomnumber = rand()%4;
     cout << "Random number is = " << randomnumber << endl;

     }

     getch();

}