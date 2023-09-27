#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int num[5];

     for(int i=0;i<5;i++)   //i=1 works but i=0 is the best when i=0 then cout i+1
     {
          cout << " \v " <<  "Enter the marks " << i+1 << " = ";
          cin >> num[i];

     }
               cout << "\t\v\"Print All Input Numbers\"\v" << endl;
     for(int i=0;i<5;i++){

          cout <<" \v "<<  "Input marks are " << i+1 <<" = " << num[i] << endl;
     }
getch();
}