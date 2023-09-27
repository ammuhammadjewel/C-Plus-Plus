#include<iostream>
#include<string>
using namespace std;


class Emplyoee
{
private:
   int employeeID;
   string name, designation;
   float salary;

public:
    void getEmployee( )
    {
        
        cout<<"Enter the emp Name:" << endl;;
        cin>>name;
        cout<<"Enter the emp ID:" << endl;
        cin>>employeeID;
        cout<<"Enter the emp Desig:" << endl;
        cin>>designation;
        cout<<"Enter the emp Salary:" << endl;
        cin>>salary;
    }
    void showEmployee( ) {
         
        cout<< "Name is: "<<name<<endl;
        cout<< "Id is: "<<employeeID<<endl;
        cout<<"Desi Is: "<< designation<<endl;
        cout<<"Salary is: "<<salary<<endl;


    }

    void showOrder(Emplyoee e2, Emplyoee e3)
    {
        cout<<salary<<endl;
        cout<<e2.salary<<endl;
        cout<<e3.salary<<endl;

        if(salary > e2.salary && salary > e3.salary)
        {
            if(e2.salary > e3.salary)
            {
                cout<<designation <<" "<< e2.designation <<" "<< e3.designation<<endl;
            }
            else
            {
                cout<<designation <<" "<< e3.designation <<" "<< e2.designation<<endl;
            }

        }

        else if(e2.salary > salary && e2.salary > e3.salary)
        {
            if(e3.salary > salary)
            {
                cout<<e2.designation <<" "<< e3.designation <<" "<< designation<<endl;
            }
            else
            {
                cout<<e2.designation <<" "<< designation <<" "<< e3.designation<<endl;
            }

        }
          else if(e3.salary > salary && e3.salary > e2.salary)
        {
            if(e2.salary > salary)
            {
                cout<<e3.designation <<" "<< e2.designation <<" "<< designation<<endl;
            }
            else
            {
                cout<<e3.designation <<" "<< designation <<" "<< e2.designation<<endl;
            }

        }

    }


};



/*
class Student {  // The class


private:
    string mobile_number; // this can be accessed only inside this class block
  public:
      Student(){ //Constructor
      student_name="Kishor";
      student_Id="12044";
      dob = "8743";
      blood_group ="O+";
      email = "kishor@aiub.edu";
      ssc_gpa =2.0;
      hsc_gpa = 1.0;
      mobile_number="023487374";

      }
    string student_name;
    string student_Id;
    string dob;
    string blood_group;
    string email;
    float ssc_gpa, hsc_gpa;
    void setMobileNumber (string mn)
    {
        mobile_number = mn;
   //   return 2;
    }
     string  getMobileNumber ()
    {
        return mobile_number;
    }
};*/

int main() {


cout<<"First Object"<<endl;
Emplyoee emp1; // Creating the object
emp1.getEmployee(); // Calling the getEmployee Method
//emp1.showEmployee(); // Calling the showEmployee Method


cout<<"Second Object"<<endl;
Emplyoee emp2;
emp2.getEmployee();
//emp2.showEmployee();
cout<<"Third Object"<<endl;
Emplyoee emp3;
emp3.getEmployee();
//emp3.showEmployee();
cout<<"Calling the order method"<<endl;
emp1.showOrder( emp2, emp3);

    /*cout<< "Student name: " << stu3.student_name <<endl;
    cout<< "Student ID: " << stu3.student_Id <<endl;
    cout<< "Student DOB: " << stu3.dob <<endl;
    cout<< "Student Blood: " << stu3.blood_group <<endl;
    cout<< "Student SSC GPA: " << stu3.ssc_gpa <<endl;
    cout<< "Student HSC GPA: " << stu3.hsc_gpa <<endl;
    cout<< "Student Mobile: " << stu3.getMobileNumber() <<endl;
    */
}
