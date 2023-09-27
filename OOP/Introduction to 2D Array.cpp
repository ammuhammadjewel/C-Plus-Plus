#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
     int A[2][3];// = {{5,6,7,8},{15,16,17,18},{25,26,27,28}};

     cout <<"Enter the elements for matrix : " << endl;
     for(int row=0; row<2; row++){
          for(int col=0; col<3; col++){
               cout << "A[" << row <<"][" << col <<"] = ";
               cin >> A[row][col];
          }
     }
     cout << "\v\"Matrix Number\" " << endl;
     cout << endl;
     for(int row=0; row<2; row++){
          for(int col=0; col<3; col++){
               cout << A[row][col] << " ";
          }
          
          cout << endl;
     }



     getch();
}