#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{    // string length
     char name1[] = "Jewel";
     char name2[10];
     int len = strlen(name1);
     cout << endl << "string length = " << len << endl;

     //string copy
     strcpy(name2,name1);
     cout << endl << " name 2 : " << name2 << endl;

     //string concadination or addition
     char name3[] = "md";
     char name4[] = " jewel";
     strcat(name3,name4);
     cout << endl << " addition result = " << name3 << endl;

     // string upper,,lower
     char name5[] = "jewel";
     strupr(name5);
     cout << endl << " All Capital letter : " << name5 << endl;

     // String lower letter
     char name6[] = "JEWEL";
     strlwr(name6);
     cout << endl << " all lower letter : " << name6 << endl;

     // string compare 

     char name7[] = "Jewel";
     char name8[] = "jewel";
     int result = strcmp(name7,name8);
     if(result==0)
     cout << endl << " equal " << endl;
     else
     {
          cout << endl << " not equal " << endl;
     }
     


     getch();
}

/*string function
1. strlen()    string length
2. strcpy()    string copy
3. strcat()    string concadination
4. strupr()    
5. strwr()
6. strcmp()*/