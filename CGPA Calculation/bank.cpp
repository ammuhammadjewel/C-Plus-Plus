
#include<iostream>
using namespace std;
class Account
{
    public:
 float balance;
 float wdraw;
  Account()
 {
  balance = 0;
  wdraw = 0;
 }
  void deposit(float num)
  {
   cout<<"Depositing amount : " << endl;
   cout<<"Enter the amount you want to deposit : " << endl;
   cin>>balance;
  }
 void withdraw(float num)
 {
   cout<<"You are withdrawing amount : " << endl;
   cout<<"Enter the amount to withdraw : " << endl;
   cin>>wdraw;
               if (balance>wdraw)
               {
   cout<<"Transaction was successful : " << endl;
  }
  else{
   cout<< "INVALID" <<endl;
 }
 }
void CurrentAmount(float num)
{  if(balance - wdraw>0){
cout<<"The current balance of your Account is : "<<balance - wdraw << endl;
}
else
{
    cout<<"Please try again"<<endl;
}
}
};
int main()
{
 Account acc;
 int num;
acc.deposit(num);
acc.withdraw(num);
acc.CurrentAmount(num);
 cout<<endl;
 return 0;
}
