#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
struct Student {
   string courseName[5]={"IP Lab","Phy","Phy_Lab","IPL","Math"};
   float marks[5]={0.0,0.0,0.0,0.0,0.0};
   float credit[5]={3.0,3.0,1.0,1.0,3.0};
   float grade[5];
   float Count=0.0;
   float totalCredit=0.0;
   float cgpa=0.0;
};
int main() {
   struct Student s;
   //Mark's..Ip lab..D+..63,Phy..D+..60,Phy lab..A..85,Ipl..C..58,Math..D..58..
   //Must take input of give value
   s.marks[0]=63;
   s.marks[1]=60;
   s.marks[2]=85;
   s.marks[3]=58;
   s.marks[4]=58;
   cout<< "Enter The Marks of "<<s.courseName[0]<<" : "<<endl;
   cin>>s.marks[0];
   cout<< "Enter The Marks of "<<s.courseName[1]<<" : "<<endl;
   cin>>s.marks[1];
   cout<< "Enter The Marks of "<<s.courseName[2]<<" : "<<endl;
   cin>>s.marks[2];
   cout<< "Enter The Marks of "<<s.courseName[3]<<" : "<<endl;
   cin>>s.marks[3];
   cout<< "Enter The Marks of "<<s.courseName[4]<<" : "<<endl;
   cin>>s.marks[4];
   for (int i=0;i<5;i++)
   {
       if(s.marks[i]>=90 && s.marks[i]<=100)
       {
           s.grade[i]=4.00;
       }
       else if(s.marks[i]>=85 && s.marks[i]<=89.9)
       {
           s.grade[i]=3.75;
       }
       else if(s.marks[i]>=80 && s.marks[i]<=84.9)
       {
           s.grade[i]=3.5;
       }
       else if(s.marks[i]>=75 && s.marks[i]<=79.9)
       {
           s.grade[i]=3.25;
       }
       else if(s.marks[i]>=70 && s.marks[i]<=74.9)
       {
           s.grade[i]=3.00;
       }
       else if(s.marks[i]>=65 && s.marks[i]<=69.9)
       {
           s.grade[i]=2.75;
       }
       else if(s.marks[i]>=60 && s.marks[i]<=64.9)
      {
          s.grade[i]=2.50;
      }
      else if(s.marks[i]>=50 && s.marks[i]<=59.9)
      {
          s.marks[i]=2.25;
      }
       else
       {
           cout << "Error"<<endl;
       }
   }
   for (int i=0;i<5;i++)
   {
       s.Count=s.Count+s.grade[i]*s.credit[i];
       s.totalCredit=s.totalCredit+s.credit[i];
   }
   s.cgpa=s.Count/s.totalCredit;
   cout << " Your CGPA : "<<s.cgpa<<endl;
   getch ();
}
