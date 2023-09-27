#include<iostream>
#include<conio.h>
using namespace std;
int main()

/*{
     int num,num1,num2;
     cout << " Enter the Number 1 : ";
     cin >> num;
     cout << " Enter the number 2 : ";
     cin >> num1;
     cout << " Enter the number 3 : ";
     cin >> num2;

     if(num>num1 && num>num2){
          cout << "\tLarge number : " << num << endl;
     }else if(num1>num && num1>num2){
          cout << "\tLarge number : " << num1 << endl;
     }else {
          cout << "\tLarge number : " << num2 << endl;
     }
     getch();

}*/

{
     int num1,num2,num3,large;//large1,large2,large3;
     cout << "Enter the number 1 : ";
     cin >> num1;
     cout << "Enter the number 2 : ";
     cin >> num2;
     cout << "Enter the number 3 : ";
     cin >> num3;

     if(num1>num2 && num1>num3){
        large = num1;
     }else if (num2>num3 && num2>num1){
        large = num2;
     }else{
        large = num3;
        //large = large1,large2,large3;
     }
     cout << "Large number : " << large << endl;
     //cout << "\tlarge number : " <<  large2 << endl;
     //cout << "\tLarge number : " << large3 << endl;
     getch();

}