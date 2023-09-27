#include<iostream>
#include<string>
using namespace std;

class Employee

{
  private :
     string name,designation;

     int employeeID;
     float salary;

     public :
         void getEmoloyee()

         {
          cin >> name;
          cin >> employeeID;
          cin >> designation;
          cin >> salary

         }
         void showemployee()
         {
          cout << "Name" << name << endl;
          cout << "Employee ID :" << employeeID <<  endl;
          cout << " Desi is : " << designation << endl;
          cout << "Salary : " << salary << endl;
         }
          
          int main()
{          
            Employee employee;
            employee.getEmployee();
            employee.showEmployee();
         

}