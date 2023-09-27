#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cout<<"enter total subjects:"<<endl;
    cin>>x;
    string subject[x];
    float number[x];
    float credit[x];
    float gpa[x];
    float total_point=0.00;
    float total_credit=0.00;
    float total_cgpa=0.00;
for(int i=0;i<x;i++)
{
    cout<<"enter subject name:"<<endl;
    cin>>subject[i];
    cout<<"enter number:"<<endl;
    cin>>number[i];
    cout<<"enter credit:"<<endl;
    cin>>credit[i];
    total_credit=total_credit+credit[i];
}
        for(int i=0;i<x;i++)
    {
        if(number[i]<=100 && number[i]>=90)
        {
            gpa[i]=4.00;
        }
        else if(number[i]<90 && number[i]>=85)
        {
            gpa[i]=3.75;
        }
         else if(number[i]<85 && number[i]>=80)
        {
            gpa[i]=3.50;
        }
         else if(number[i]<80 && number[i]>=75)
        {
            gpa[i]=3.25;
        }
         else if(number[i]<75 && number[i]>=70)
        {
            gpa[i]=3.00;
        }
         else if(number[i]<70 && number[i]>=65)
        {
            gpa[i]=2.75;
        }
         else if(number[i]<65 && number[i]>=60)
        {
            gpa[i]=2.50;
        }
         else if(number[i]<60 && number[i]>=50)
        {
            gpa[i]=2.25;
        }
         else if(number[i]<50 && number[i]>=0)
        {
            gpa[i]=0.00;
        }
        total_point+=gpa[i]*credit[i];
    }
    total_cgpa=total_point/total_credit;
    cout<<"My total cgpa:"<<total_cgpa<<endl;
}