#include<iostream>
#include<conio.h>
using namespace std;

void DisplayArray(int num[], int size)
{
     for(int i=0; i<5; i++)
     cout << endl << i+1 << " = " << num[i] << endl;
}

int main()
{
     int number[5] = {51,54,12,65,24};
     DisplayArray(number,5);

     getch();
}