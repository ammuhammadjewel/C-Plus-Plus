#include<iostream>
#include<string>
using namespace std;
class Employee
{
        private :

                string name;
                int employeeID;
                string designation;
                float salary;

                string name1;
                int employeeID1;
                string designation1;
                float salary1;
        public :
               void getEmployee()
               {

                   cout << "Enter name:";
                   cin >> name;
                   cout << "Enter ID:";
                   cin >> employeeID;
                   cout <<"Enter designation:";
                   cin >> designation;
                   cout << "Enter salary:";
                   cin >> salary;
                   cout << endl;

                   cout << "Enter name1:";
                   cin >> name1;
                   cout << "Enter ID1:";
                   cin >> employeeID1;
                   cout <<"Enter designation1:";
                   cin >> designation1;
                   cout << "Enter salary1 :";
                   cin >> salary1;
                   cout << endl;
                }
                void showEmployee()
                {
                    cout << endl;
                    cout << name <<endl;

                    cout << employeeID << endl;
                    cout << designation << endl;
                    cout << salary << endl;

                    cout << endl;
                    cout << name1 <<endl;

                    cout << employeeID1 << endl;
                    cout << designation1 << endl;
                    cout << salary1 << endl;
                }
};
int main()
{
            Employee employee;
            employee.getEmployee();
            employee.showEmployee();


}
