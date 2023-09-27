#include<iostream>
#include<string>
using namespace std;
class Employee {
        private :
                int employeeID;
                string name;
                string designation;
                float salary;
        public:
               void getEmployee()
               {
                   cout << "Enter ID:";
                   cin >> employeeID;
                   cout << "Enter name:";
                   cin >> name;
                   cout <<"Enter designation:";
                   cin >> designation;
                   cout << "Enter salary:";
                   cin >> salary;
                   cout << endl;
                }
                void showEmployee()
                {
                    cout << endl;
                    cout << employeeID << endl;
                    cout << name <<endl;
                    cout << designation << endl;
                    cout << "$" << salary << endl;
                }
};
int main()
{
            Employee employee;
            employee.getEmployee();
            employee.showEmployee();
}
