#include<iostream>
#include<string>
using namespace std;

class Bank
{
    private:
    float amount;
    public:
        Bank(){ // THis is a constructor
            amount = 0.0;
        }
         void deposit (float amount)
         {
            //add the amount to the current amount
         }
         float withdraw(float amount)
         {

             //whether the transaction is successful or not
             //If it is successful, subtract the withdraw amount from
             //the current balance.

         }
         float CurrentAmount()
         {
             return amount;
         }

};

int main(){

    Bank account1;
    cout<<account1.CurrentAmount()<<endl;
}

