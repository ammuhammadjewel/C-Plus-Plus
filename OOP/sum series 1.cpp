//!: 1+2+3+4+..............+n
//2: 2+4+6+..even number...+n
//3: 1+3+5+..odd number....+n
//4: 1.5+2.5+3.5+....float num.....+n
//5: 1+1/2+1/3+1/4.......+1/n
//6: 1^2+2^2+3^2+........+n^2
//7: 1^5+2^5+3^5+........+n^5
//8: 1.2+3.4+5.6+...........n
//9: 1*2*3*4*..............*n
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()

{
     int sum=0,n;
     cout << "Enter the Last Number : ";
     cin >> n;

     //1for(int i=1;i<=n;i=i+1 )   //i++
     //2for(int i=2;i<=n;i=i+2)
     //3for(int i=1;i<=n;i=i+2)
     //4for(int i=1.5;i<=n;i=i+1)
     //5for()
     for(int i=1;i<=n;i=i+1)



     {
          //sum = sum + i;
          sum = sum +  pow(i,2);   //i*i*i*i*i;  heder file for pow()
     }
     cout << "Summation of Last Number : " << sum << endl;

     getch();
}