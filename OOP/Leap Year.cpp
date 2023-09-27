/*#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int year;
     cout << "Enter any year : ";
     cin >> year;

     if(year%4==0 && year%100!=0){
          cout << "\t\v<-\"Leap Year\"->" << endl;
     }else if(year%400==0 ){
          cout << "\t\v<-\"Leap Year\"->" << endl;
     }else{
          cout << "\t\v<-\"Not Leap Year\"->" << endl;
     }getch();
}*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int year;
     cout << "Enter any year : ";
     cin >> year;

     if(year%4==0 && year%100!=0 || year%400==0){
          cout << "\t\v<-\"Leap Year\"->" << endl;
     }else{
          cout << "\t\v<-\"Not Leap Year\"->" << endl;
     }
     getch();
}