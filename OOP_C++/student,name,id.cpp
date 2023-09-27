#include<iostream>
#include<conio.h>
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

    void getstudent( )
    {
        cout << "Enter student name : " << endl;
        cin >> name;
        cout << "Enter student id : " <<endl;
        cin >> id;
        cout << "Enter amount of courses : " <<endl;
        cin >> course;
        cout << "Enter student's cgpa : " <<endl;
        cin >> cgpa;
    }
    void ShowStudentInfo()

    {
         cout << "Name is: " << name <<endl;
        cout << "ID is : " << id <<endl;
        cout << "Course amount is: " << course <<endl;
        cout << "CGPA is : " << cgpa <<endl;


    }

    void RankStudent(student s1, student s2,student s3)

    {
        cout << s1.cgpa <<endl;
        cout << s2.cgpa <<endl;
        cout << s3.cgpa <<endl;

        if(s1.cgpa > s2.cgpa && s1.cgpa > s3.cgpa)

        {

            if(s2.cgpa > s3.cgpa)

            {
                cout << s1.id <<" "<< s2.id <<" "<< s3.id <<endl;
            }
            else
            {
                cout << s1.id <<" "<< s3.id <<" "<< s2.id <<endl;
            }

        }

        else if(s2.cgpa > s1.cgpa && s2.cgpa > s3.cgpa)
        {
            if(s3.cgpa > s1.cgpa)
            {
                cout << s2.id <<" "<< s3.id <<" "<< s1.id <<endl;
            }
            else
            {
                cout << s2.id <<" "<< s1.id <<" "<< s3.id <<endl;
            }

        }
          else if(s3.cgpa > s1.cgpa && s3.cgpa > s2.cgpa)
        {
            if(s2.cgpa > s1.cgpa)
            {
                cout << s3.id <<" "<< s2.id <<" "<< s1.id <<endl;
            }
            else
            {
                cout << s3.id  <<" "<< s1.id <<" "<< s2.id <<endl;
            }

        }

    }


};

int main()

{

cout << "First Student : " <<endl;
student s1;
s1.getstudent();
s1.ShowStudentInfo();
cout << "Second Student : " <<endl;
student s2;
s2.getstudent();
s2.ShowStudentInfo();
cout << "Third Student : " <<endl;
student s3;
s3.getstudent();
s3.ShowStudentInfo();
cout << "Calling Cgpa serial : " <<endl;
s2.RankStudent(s1,s2,s3);

getch();

}
