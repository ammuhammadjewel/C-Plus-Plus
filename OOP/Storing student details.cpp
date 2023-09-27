#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
     string name;
     int age;

     ofstream file;
     file.open("Student_details.txt",ios::out|ios::app);

     for(int i=1; i<4; i++)
     {
     cout <<" Enter your name :";
     getline(cin,name);
     file << "Your name " << name <<endl;

     cout << " Enter your age : ";
     cin >>age;
     file << "Your age " << age << endl;
     cin.ignore();
     }

     //file.close();

     return 0;
}

/*int main()
{
     string name;
     int age;

     ofstream file;
     file.open("Student_details.txt",ios::out|ios::app);

     cout <<" Enter your name :";
     getline(cin,name);
     file << name <<endl;

     cout << " Enter your age : ";
     cin >>age;
     file << age << endl;
     //cin.ignore();

     file.close();

     return 0;
}*/