
#include<iostream>
#include<conio.h>
using namespace std;
struct student
{


     char name[20];
     char id[20];
     float marks;
};
 int main()
{
    int i;
  struct student s[5];
  for(i=0;i<5;i++)
 {
     cin >> s[i].id;
     cin >> s[i].name;
    cin >> s[i].marks;
 }
 for(i=0;i<5;i++)
     {cout<<s[i].name <<s[i]. id << s[i]. marks<<endl;

     getch ();
     }
}
