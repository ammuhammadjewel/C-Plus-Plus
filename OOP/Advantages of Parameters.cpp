#include<iostream>
#include<conio.h>
using namespace std;

void square(int n)

{
     int result1 = n+n;
     int result2 = n-n;
     int result3 = n*n;
     int result4 = n/n;
     cout << endl;
     cout << "Sum of "<< n <<" = " << result1 << endl;
     cout << endl;
     cout << "Sub of "<< n <<" = " << result2 << endl;
     cout << endl;
     cout << "Square of "<< n <<" = " << result3 << endl;
     cout << endl;
     cout << "Div of "<< n <<" = " << result4 << endl;
     cout << endl;
};

int main()
{
     square(5);
     square(6);
     square(7);
     square(8);
     square(9);

     getch();
}