#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int mark;
     cout << "enter mark : ";
     cin >> mark;

     if(mark>32){
          if(mark > 90){
               cout << "\t\v\"A+ CGPA 4\"" << endl;
          }else if(mark > 85){
               cout << "\t\v\"A CGPA 3.75\" " << endl;
          }else if(mark > 80){
               cout << "\t\v\"B+ CGPA 3.5\" " << endl;
          }else if(mark > 75){
               cout << "\t\v\"B CGPA 3.25\" " << endl;
          }else if(mark > 70){
               cout << "\t\v\"C+ CGPA 3\" " << endl;
          }else if(mark > 65){
               cout << "\t\v\"C CGPA 2.75\" " << endl;
          }else if(mark > 60){
               cout << "\t\vD+ CGPA 2.5 " << endl;
          }else if(mark > 50){
               cout << "\t\vD CGPA 2.25 " << endl;
          }
          }
     else{
             cout << "\t\v\"Fail\"";
     }getch();
}