//understanding pointer variable;
#include <iostream.h>
void main(void)
{
float numbers[5]={22.5,34.8,46.8,59.1,68.3};
cout <<" 1st element of array numbers: "<<numbers[0]<<endl;
cout<<"1st element of array numbers:  "<<*numbers<<endl;
cout<<"3rd element of array numbers: "<<numbers[2]<<endl;
cout<<"3rd element of array numbers: "<<*numbers<<endl;
float *p;
p=numbers;
cout<<"1st element of array numbers: " << p[0]<<endl;
cout<<"1st element of array numbers: " << *p<<endl;
cout <<"3rd element of array numbers: "<<p[2]<<endl;
cout<<"3rd element of array numbers: "<<*p<<endl;
int i;
for(i=0, p=numbers;i<5;i++)
cout<<"element "<< (i+1) <<"of array numbers: "<<*p<<endl;

}