#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Student // The class
{
private:
    int mobile_number; // this can be accessed only inside this class block
  public:
    string student_name;
    string student_Id;
    string dob;
    string blood_group;
    string email;
    float ssc_gpa, hsc_gpa;
    void setMobileNumber (int mn)
    {
        mobile_number = mn;
    }
     int  getMobileNumber ()
    {
        return mobile_number;
    }
};

int main() {

    Student stu1;

    stu1.student_name = "Jwel Miah";
    stu1.student_Id = "20-43243-1";
    stu1.dob = "15/3/2001";
    stu1.blood_group = "AB+";
    stu1.email = "md,jewel.43243@gmail.com";
    stu1.ssc_gpa = 5.0;
    stu1.hsc_gpa = 3.92;
     stu1.setMobileNumber(1234567);
    cout << "\tStudent name : " << stu1.student_name <<endl;
    cout << "\tStudent ID : " << stu1.student_Id <<endl;
    cout << "\tStudent DOB : " << stu1.dob <<endl;
    cout << "\tStudent Blood : " << stu1.blood_group <<endl;
    cout << "\tStudent SSC GPA : " << stu1.ssc_gpa <<endl;
    cout << "\tStudent HSC GPA : " << stu1.hsc_gpa <<endl;
    cout << "\tStudent Mobile : " << stu1.getMobileNumber() <<endl;

    getch();

}
