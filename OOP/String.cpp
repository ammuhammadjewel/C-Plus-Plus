#include<iostream>
#include<stdio.h>
using namespace std;

int main()
/*{
     char message[] = "md jewel ";  //{'a','i','e','o','u','\0'};
     cout << endl << message;
     cout << endl;
     return 0;
}*/

{
     char name[20];
     cout << " Enter your name : ";
     gets(name);         //show full name;

     //cin >> name;
     cout << endl << " Welcome Mr. " << name << endl;
     return 0;
}