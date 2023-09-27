#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     string name;
     ofstream file;
     file.open("Student.txt",ios::out|ios::app);
     //file << " this is my 1st semester " << endl;
     cout << " Enter your name : ";
     getline(cin,name);
     file << "Welcome " << name <<endl;

     file.close();
     cout <<"Added done" << endl;

     return 0;
}