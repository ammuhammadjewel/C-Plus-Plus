/*#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
//constructor1
class myclass{
     public :
      myclass(){
           cout << "Hello World!";
      }
};

int main()
{
     myclass myobj;
     getch();
}

//constructor2

class car

{
     public :
      string brand;
      string model;
      int year;

      car(string x,string y,int z)
      {
           brand = x;
           model = y;
           year = z;

      }
};

int main()
{
     car carobj1("BMW","x5",1999);
     car carobj2("Ford","mustang",1969);

     cout << "1st Car details : " << carobj1.brand <<""<< carobj1.model << ""<< carobj1.year << endl;
     cout << "2nd Car details : " << carobj2.brand <<""<< carobj2.model << ""<< carobj2.year << endl;

     getch();
}*/

//constructor3

#include<iostream>
using namespace std;
class Account
{
    public:
 float balance;
 float widraw;
  Account()
 {
  balance = 0;
  widraw = 0;
 }
  void deposit(float num)
  {
   cout<<"Depositing amount : " << endl;
   cout<<"Enter the amount you want to deposit : " << endl;
   cin>>balance;
  }
 void withdraw(float num)
 {cout<<"Withdraw : " << endl;
   cout<<"Enter the amount to withdraw : " << endl;
 cin>>widraw;
 if (balance>widraw)
 { cout<<"Transaction was    successful : " << endl;}
else{
   cout<< "INVALID" <<endl; }
}
void CurrentAmount(float num)
{  if(balance - widraw>0){
cout<<"The current balance is : "<<balance - widraw << endl;}
else
{ cout<<"Please try again"<<endl;}
    }
};
int main()
{Account acc;
 int num;
acc.deposit(num);
acc.withdraw(num);
acc.CurrentAmount(num);
 cout<<endl;
 return 0;
}