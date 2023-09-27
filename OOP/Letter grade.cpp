#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int marks;
     cout << "Enter your marks :";
     cin >> marks;

     if(marks > 100 )
     {
          cout << "Fail";
     }
     else if(marks > 90){
          cout << "A+ CGPA 4";
     }else if(marks > 85){
          cout << "A CGPA 3.75";
     }else if(marks > 80){
          cout << "B+ CGPA 3.5";
     }else if(marks > 75){
          cout << "B CGPA 3.25";
     }else if(marks > 70){
          cout << "C+ CGPA 3.00";
     }else if(marks > 65){
          cout << "C CGPA 2.75";
     }else if(marks > 60){
          cout << "D+ CGPA 2.5";
     }else if(marks > 50){
          cout << "D CGPA 2.25";
     }
      else if (marks < 0){
           cout << "Ivalid";
     }else {
          cout << "Fail" << endl;
          cout << "Best of Luck";
     }
     getch();
}