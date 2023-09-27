#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class myclass           //The Class

{
     public :             //access specifier
       void mymethod()    //method function defined inside the class

{
     cout << "hello world : " << endl;

}
};
int main()
{
     myclass myobj;
      myobj.mymethod();

      getch();
}