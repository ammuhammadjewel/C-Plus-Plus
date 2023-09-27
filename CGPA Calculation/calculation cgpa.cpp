#include <iostream>
#include<conio.h>
#include <cstring>

using namespace std;

struct Student
{
   string courseName[7]={"IP","Phy","Phy_Lab","IPL","Math","English","ICS"};
   float marks[7]={0.0,0.0,0.0,0.0,0.0,0.0,0.0};
   float credit[7]={3.0,3.0,1.0,1.0,3.0,3.0,1.0};
   float grade[7];
   float CumulativeCount=0.0;
   float totalCredit=0.0;
   float cgpa=0.0;
};


int main() {
   struct Student s ;
   //Mark's.. Phy..D+..60,Phy lab..A..85,Ipl..D..58,Ip..D+..63,Math..D..58.. Ar 2tar result blank ..

   s.marks[0]=60;
   s.marks[1]=85;
   s.marks[2]=58;
   s.marks[3]=63;
   s.marks[4]=58;

   Label1 :

   cout<< "Enter The Marks of "<<s.courseName[5]<<" : "<<endl;
   cin>>s.marks[5];
   cout<< "Enter The Marks of "<<s.courseName[6]<<" : "<<endl;
   cin>>s.marks[6];

   //Grade selection

   for (int i=0;i<7;i++)
   {
       if(s.marks[i]>=90 && s.marks[i]<=100)
       {
           s.grade[i]=4.00;
       }
       else if(s.marks[i]>=85 && s.marks[i]<=89)
       {
           s.grade[i]=3.75;
       }
       else if(s.marks[i]>=80 && s.marks[i]<=84)
       {
           s.grade[i]=3.5;
       }
       else if(s.marks[i]>=75 && s.marks[i]<=79)
       {
           s.grade[i]=3.25;
       }
       else if(s.marks[i]>=70 && s.marks[i]<=74)
       {
           s.grade[i]=3.00;
       }
       else if(s.marks[i]>=65 && s.marks[i]<=69)
       {
           s.grade[i]=2.75;
       }
       else if(s.marks[i]>=60 && s.marks[i]<=64)
       {
           s.grade[i]=2.5;
       }
       else if(s.marks[i]>=50 && s.marks[i]<=59)
       {
           s.grade[i]=2.25;
       }

       else if(s.marks[i]>=0 && s.marks[i]<=49)
       {
           s.grade[i]=0.00;
       }

       else
       {
           cout << "Wrong Input for Marks"<<endl;
           goto Label1;
       }

   }
   for (int i=0;i<7;i++)
   {
       s.CumulativeCount=s.CumulativeCount+s.grade[i]*s.credit[i];
       s.totalCredit=s.totalCredit+s.credit[i];
   }
   s.cgpa=s.CumulativeCount/s.totalCredit;

   cout << "Your CGPA : "<<s.cgpa<<endl;


   getch ();
}
