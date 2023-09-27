#include<iostream>
#include<string>
using namespace std;
class student
{
private:
     string name;
     string id;
public:
     float cgpa;
     int course;

    void getstudent( ){
        cout<<"Enter student's name:";
        cin>>name;
        cout<<"Enter student's id:";
        cin>>id;
        cout<<"Enter amount of courses:";
        cin>>course;
        cout<<"Enter student's cgpa:";
        cin>>cgpa;
    }
    void ShowStudentInfo() {
         cout<< "Name is: "<<name<<endl;
        cout<< "ID is: "<<id<<endl;
        cout<<"Course amount is: "<< course<<endl;
        cout<<"CGPA is"<<cgpa<<endl;


    }

    void RankStudent(student data1, student data2,student data3)
    {
        cout<<data1.cgpa<<endl;
        cout<<data2.cgpa<<endl;
        cout<<data3.cgpa<<endl;

        if(data1.cgpa > data2.cgpa && data1.cgpa > data3.cgpa)
        {
            if(data2.cgpa > data3.cgpa)
            {
                cout<<data1.id <<" "<< data2.id <<" "<< data3.id<<endl;
            }
            else
            {
                cout<<data1.id <<" "<< data3.id <<" "<< data2.id<<endl;
            }

        }

        else if(data2.cgpa > data1.cgpa && data2.cgpa > data3.cgpa)
        {
            if(data3.cgpa > data1.cgpa)
            {
                cout<<data2.id <<" "<< data3.id <<" "<< data1.id<<endl;
            }
            else
            {
                cout<<data2.id <<" "<< data1.id <<" "<< data3.id<<endl;
            }

        }
          else if(data3.cgpa> data1.cgpa && data3.cgpa > data2.cgpa)
        {
            if(data2.cgpa > data1.cgpa)
            {
                cout<<data3.id <<" "<< data2.id <<" "<< data1.id<<endl;
            }
            else
            {
                cout<<data3.id  <<" "<< data1.id <<" "<< data2.id<<endl;
            }

        }

    }


};

int main() {

cout<<"First Student"<<endl;
student data1;
data1.getstudent();
data1.ShowStudentInfo();
cout<<"Second Student"<<endl;
student data2;
data2.getstudent();
data2.ShowStudentInfo();
cout<<"Third Student"<<endl;
student data3;
data3.getstudent();
data3.ShowStudentInfo();
cout<<"Calling Cgpa serial"<<endl;
data2.RankStudent(data1,data2,data3);

}